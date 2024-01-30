@class NSArray, NSString;

@interface SAIntentGroupSiriKitParameterMetadata : AceObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *confirmationStates;
@property (copy, nonatomic) NSString *parameterName;
@property (nonatomic) BOOL shouldResolve;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)siriKitParameterMetadata;
+ (id)siriKitParameterMetadataWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
