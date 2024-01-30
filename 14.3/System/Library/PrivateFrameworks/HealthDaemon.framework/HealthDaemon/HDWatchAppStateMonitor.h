@class NSString;
@protocol HDWatchAppStateMonitorDelegate;

@interface HDWatchAppStateMonitor : NSObject <FBSDisplayLayoutObserver>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) BOOL appIsActive;
@property (weak, nonatomic) id<HDWatchAppStateMonitorDelegate> delegate;

+ (void)launchWorkoutAppIfNeededWithFitnessMachineSessionUUID:(id)a0;

- (void)layoutMonitor:(id)a0 didUpdateDisplayLayout:(id)a1 withContext:(id)a2;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithBundleIdentifier:(id)a0;
- (id)initWithFirstPartyWorkoutApp;

@end
