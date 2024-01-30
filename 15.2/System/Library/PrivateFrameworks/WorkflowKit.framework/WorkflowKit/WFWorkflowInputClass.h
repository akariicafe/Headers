@class NSString;

@interface WFWorkflowInputClass : RLMObject

@property (copy) NSString *className;

+ (id)requiredProperties;
+ (id)primaryKey;

- (void).cxx_destruct;

@end
