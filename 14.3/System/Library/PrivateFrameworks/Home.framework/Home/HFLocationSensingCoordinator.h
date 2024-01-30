@class NAFuture, HFLocationManagerDispatcher, NSString, NSUserDefaults;
@protocol HFLocationSensingCoordinatorDelegate;

@interface HFLocationSensingCoordinator : NSObject <HFLocationManagerObserver>

@property (retain, nonatomic) NSUserDefaults *defaults;
@property (retain, nonatomic) HFLocationManagerDispatcher *locationDispatcher;
@property (nonatomic) int defaultsChangedNotifyToken;
@property (weak, nonatomic) id<HFLocationSensingCoordinatorDelegate> delegate;
@property (readonly, nonatomic) NAFuture *locationSensingAvailableFuture;
@property (nonatomic) BOOL homeSensingEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithDelegate:(id)a0;
- (void)_defaultsDidChange;
- (void)locationManager:(id)a0 didChangeAuthorizationStatus:(int)a1;

@end
