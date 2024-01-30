@class NSString, NSArray, NSDictionary;

@interface BCInternalAuthenticationRequest : NSObject <BCDictionarySerializable, NSSecureCoding> {
    NSString *_businessIdentifier;
    NSString *_groupIdentifier;
    NSString *_responseEncryptionKey;
    NSArray *_retrieve;
    NSDictionary *_labels;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *businessIdentifier;
@property (readonly, nonatomic) NSString *groupIdentifier;
@property (readonly, nonatomic) NSString *responseEncryptionKey;
@property (readonly, nonatomic) NSArray *retrieve;
@property (readonly, nonatomic) NSDictionary *labels;
@property (readonly, nonatomic) NSDictionary *dictionaryValue;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;

@end
