@class NSString, BCOAuth2Parameters;

@interface BCAuthenticationRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *businessIdentifier;
@property (retain, nonatomic) BCOAuth2Parameters *oauth2;
@property (readonly, nonatomic) NSString *businessName;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0 imageDictionary:(id)a1;

@end
