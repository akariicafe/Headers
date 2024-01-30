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

- (id)initWithDelegate:(id)a0;
- (void)locationManagerDidChangeAuthorization:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)_defaultsDidChange;
- (void)dealloc;

@end
