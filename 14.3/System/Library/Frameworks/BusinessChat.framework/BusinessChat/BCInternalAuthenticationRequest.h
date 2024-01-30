@class NSString, NSArray, NSDictionary;

@interface BCInternalAuthenticationRequest : NSObject <BCDictionaryImageSerializable, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *businessIdentifier;
@property (retain, nonatomic) NSString *groupIdentifier;
@property (retain, nonatomic) NSString *responseEncryptionKey;
@property (retain, nonatomic) NSArray *retrieve;
@property (retain, nonatomic) NSDictionary *labels;
@property (readonly, nonatomic) NSDictionary *dictionaryValue;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0 imageDictionary:(id)a1;

@end
