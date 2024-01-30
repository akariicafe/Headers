@class NSString, NSDate;

@interface SASBootstrapSpeechIdMetadata : AceObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *bootstrapSpeechId;
@property (copy, nonatomic) NSString *deviceType;
@property (copy, nonatomic) NSDate *keychainCreationDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)bootstrapSpeechIdMetadata;
+ (id)bootstrapSpeechIdMetadataWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
