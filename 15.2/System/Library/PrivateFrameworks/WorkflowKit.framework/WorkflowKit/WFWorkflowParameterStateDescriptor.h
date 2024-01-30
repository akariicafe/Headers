@class NSString, NSDictionary;

@interface WFWorkflowParameterStateDescriptor : MTLModel <MTLJSONSerializing, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *cachedDisplayName;
@property (readonly, copy, nonatomic) NSString *workflowName;
@property (readonly, copy, nonatomic) NSString *workflowIdentifier;
@property (readonly, nonatomic) BOOL isSelf;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (unsigned long long)storageBehaviorForPropertyWithKey:(id)a0;

@end
