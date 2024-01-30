@class _ATXDataStore;
@protocol ATXAppClipLaunchListenerProtocol;

@interface ATXWebClipDataStore : NSObject

@property (readonly, nonatomic) _ATXDataStore *dataStore;
@property (readonly, nonatomic) id<ATXAppClipLaunchListenerProtocol> appClipUsageUpdateListener;

- (id)initWithDataStore:(id)a0;
- (id)webClipBundleIdsForAppClip:(id)a0;
- (id)initWithDataStore:(id)a0 contextUpdateListener:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)updateWithUsageEvent:(id)a0;

@end
