@class NSString, RLMLinkingObjects, NSDate;

@interface WFRealmWorkflowQuarantine : RLMObject

@property (copy) NSString *sourceAppIdentifier;
@property (retain) NSDate *importDate;
@property (readonly) RLMLinkingObjects *workflows;

+ (id)className;
+ (id)requiredProperties;
+ (id)defaultPropertyValues;
+ (id)linkingObjectsProperties;

- (void).cxx_destruct;

@end
