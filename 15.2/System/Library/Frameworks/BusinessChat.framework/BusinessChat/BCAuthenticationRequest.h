@class NSString, BCOAuth2Parameters, NSDictionary;

@interface BCAuthenticationRequest : NSObject <BCDictionarySerializable, NSSecureCoding> {
    NSString *_businessIdentifier;
    BCOAuth2Parameters *_oauth2;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *businessIdentifier;
@property (readonly, nonatomic) NSString *businessName;
@property (readonly, nonatomic) BCOAuth2Parameters *oauth2;
@property (readonly, nonatomic) NSDictionary *dictionaryValue;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)debugDescription;

@end
