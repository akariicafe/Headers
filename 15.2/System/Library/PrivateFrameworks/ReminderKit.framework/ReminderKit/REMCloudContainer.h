@interface REMCloudContainer : NSObject

+ (id)defaultCloudContainer;
+ (BOOL)isSandboxEnvironment;
+ (id)newCloudContainerForAccountID:(id)a0;
+ (id)defaultCloudContainerName;

@end
