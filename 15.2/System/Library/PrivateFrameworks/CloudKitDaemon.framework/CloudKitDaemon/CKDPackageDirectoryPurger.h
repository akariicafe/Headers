@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface CKDPackageDirectoryPurger : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSMutableArray *rootDirectories;

+ (void)schedulePeriodicPurgesInDirectory:(id)a0;
+ (id)sharedPurger;

- (void)addRootDirectory:(id)a0;
- (void)purgeRootDirectory:(id)a0;
- (void)purgeDirectory:(id)a0;
- (void)purgeAll;
- (void)registerXPCActivity;
- (void).cxx_destruct;
- (id)init;

@end
