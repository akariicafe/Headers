@interface WFParameterValueRegistry : NSObject

+ (void)initialize;
+ (void)registerValueClass:(Class)a0;
+ (id)registeredValueClasses;
+ (void)createRegisteredValueClassesSet;
+ (void)rediscoverParameterValueClassesIfNeeded;
+ (id)allParameterValueClassesInWorkflowKit;

@end
