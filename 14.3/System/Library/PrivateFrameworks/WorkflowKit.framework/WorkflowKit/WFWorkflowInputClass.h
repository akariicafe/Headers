@class NSString;

@interface WFWorkflowInputClass : RLMObject

@property (copy) NSString *className;

+ (id)primaryKey;
+ (id)requiredProperties;

- (void).cxx_destruct;

@end
