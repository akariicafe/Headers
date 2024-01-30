@interface REMCloudContainer : NSObject

+ (id)newCloudContainerForAccountID:(id)a0;
+ (id)newCloudContainerWithPublicCloudDatabase;
+ (BOOL)isSandboxEnvironment;
+ (id)newCloudContainerForAccount:(id)a0;

@end
