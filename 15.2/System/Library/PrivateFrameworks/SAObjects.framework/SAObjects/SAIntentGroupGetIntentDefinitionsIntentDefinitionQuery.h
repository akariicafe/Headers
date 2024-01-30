@class NSString;

@interface SAIntentGroupGetIntentDefinitionsIntentDefinitionQuery : AceObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *entity;
@property (copy, nonatomic) NSString *verb;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getIntentDefinitionsIntentDefinitionQuery;
+ (id)getIntentDefinitionsIntentDefinitionQueryWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
