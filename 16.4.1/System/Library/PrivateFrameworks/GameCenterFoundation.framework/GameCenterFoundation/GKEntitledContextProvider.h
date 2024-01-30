@interface GKEntitledContextProvider : NSObject

+ (BOOL)isEntitledToUseGroupActivities;
+ (id)getCurrentDeviceName;

- (id)init;

@end
