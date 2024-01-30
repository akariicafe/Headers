@class NSString;

@interface WFWorkflowType : RLMObject

@property (copy) NSString *type;

+ (id)primaryKey;
+ (id)requiredProperties;

- (void).cxx_destruct;

@end
