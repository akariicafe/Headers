@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface CKDPackageDirectoryPurger : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSMutableArray *rootDirectories;

+ (id)sharedPurger;
+ (void)schedulePeriodicPurgesInDirectory:(id)a0;

- (void)addRootDirectory:(id)a0;
- (void)purgeAll;
- (id)init;
- (void).cxx_destruct;
- (void)purgeRootDirectory:(id)a0;
- (void)registerXPCActivity;
- (void)purgeDirectory:(id)a0;

@end
