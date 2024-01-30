@class NSString;

@interface WFWorkflowType : RLMObject

@property (copy) NSString *type;

+ (id)requiredProperties;
+ (id)primaryKey;

- (void).cxx_destruct;

@end
