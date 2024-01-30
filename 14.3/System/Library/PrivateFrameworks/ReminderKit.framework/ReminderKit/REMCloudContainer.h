@interface REMCloudContainer : NSObject

+ (BOOL)isSandboxEnvironment;
+ (id)defaultCloudContainer;
+ (id)newCloudContainerForAccountID:(id)a0;
+ (id)defaultCloudContainerName;

@end
