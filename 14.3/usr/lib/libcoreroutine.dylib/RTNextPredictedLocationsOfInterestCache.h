@class RTDataProtectionManager, NSArray, NSObject, RTStarkManager;
@protocol OS_dispatch_queue, RTNextPredictedLocationsOfInterestCacheDelegate;

@interface RTNextPredictedLocationsOfInterestCache : NSObject

@property (nonatomic) BOOL enabled;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSArray *nextPredictedLocationsOfInterest;
@property (retain, nonatomic) RTDataProtectionManager *dataProtectionManager;
@property (retain, nonatomic) RTStarkManager *starkManager;
@property (weak, nonatomic) id<RTNextPredictedLocationsOfInterestCacheDelegate> delegate;

+ (id)cachePath;

- (void)clear;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)purgeWithReferenceDate:(id)a0;
- (void)onDataProtectionNotification:(id)a0;
- (id)initWithQueue:(id)a0 dataProtectionManager:(id)a1 starkManager:(id)a2;
- (void)cacheNextPredictedLocationsOfInterest:(id)a0;
- (id)getCachedNextPredictedLocationsOfInterest;
- (void)handleUnlockedSinceBoot:(BOOL)a0;
- (void)onStarkNotification:(id)a0;
- (void)handleStarkTrustedConnectionEstablished:(BOOL)a0;

@end
