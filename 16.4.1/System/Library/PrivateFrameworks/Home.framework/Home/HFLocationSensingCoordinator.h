@class HFLocationManagerDispatcher, NAFuture, NSString, NSUserDefaults;
@protocol HFLocationSensingCoordinatorDelegate;

@interface HFLocationSensingCoordinator : NSObject <HFLocationManagerObserver>

@property (nonatomic) BOOL cachedHomeSensingValue;
@property (retain, nonatomic) NAFuture *homeSensingFirstFuture;
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

- (void)_defaultsDidChange;
- (void)dealloc;
- (id)initWithDelegate:(id)a0;
- (void)locationManagerDidChangeAuthorization:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)readHomeSensingDefault;

@end
