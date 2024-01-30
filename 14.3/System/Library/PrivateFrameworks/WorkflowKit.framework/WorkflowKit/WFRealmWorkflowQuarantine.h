@class NSString, RLMLinkingObjects, NSDate;

@interface WFRealmWorkflowQuarantine : RLMObject

@property (copy) NSString *sourceAppIdentifier;
@property (retain) NSDate *importDate;
@property (readonly) RLMLinkingObjects *workflows;

+ (id)defaultPropertyValues;
+ (id)requiredProperties;
+ (id)className;
+ (id)linkingObjectsProperties;

- (void).cxx_destruct;

@end
