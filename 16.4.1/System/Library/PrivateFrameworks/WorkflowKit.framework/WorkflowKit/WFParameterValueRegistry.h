@interface WFParameterValueRegistry : NSObject

+ (void)initialize;
+ (void)createRegisteredValueClassesSet;
+ (id)allParameterValueClassesInWorkflowKit;
+ (void)rediscoverParameterValueClassesIfNeeded;
+ (void)registerValueClass:(Class)a0;
+ (id)registeredValueClasses;

@end
