@class NWNetworkOfInterest, VCDispatchTimer, NSMutableSet, NSObject, NWNetworkOfInterestManager;
@protocol OS_dispatch_queue;

@interface VCWifiAssistManager : NSObject <NWNetworkOfInterestManagerDelegate> {
    BOOL _userPrefered;
    BOOL _inBudget;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMutableSet *_delegates;
    VCDispatchTimer *_refreshTimer;
    NWNetworkOfInterestManager *_manager;
    NWNetworkOfInterest *_wifiNOI;
    BOOL _respectBudgetStatusEnabled;
}

@property (readonly) BOOL isAvailable;
@property (readonly) unsigned char wifiAssistState;

+ (id)sharedInstance;

- (void)dealloc;
- (void)addDelegate:(id)a0;
- (void)didStopTrackingNOI:(id)a0;
- (id)init;
- (void)removeDelegate:(id)a0;
- (id)description;
- (void)didStartTrackingNOI:(id)a0;
- (void)queryBudget;
- (void)queryUserPreference;
- (void)refreshBudget;

@end
