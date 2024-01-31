@class AXUIClient, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface AXBTouchAccommodationsController : NSObject <AXUIClientDelegate> {
    BOOL _areTouchAccommodationsInEffect;
    BOOL _touchAccommodationsEverEnabled;
    NSObject<OS_dispatch_queue> *_touchAccommodationsQueue;
}

@property (retain, nonatomic) AXUIClient *touchAccommodationsClient;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)hideHoldDurationTripleClickHelp;
+ (void)showHoldDurationTripleClickHelp;
+ (void)initializeMonitor;

- (void)connectionWithServiceWasInterruptedForUserInterfaceClient:(id)a0;
- (id)_clientIdentifier;
- (void).cxx_destruct;
- (void)_hideHoldDurationTripleClickHelp;
- (void)_registerForTouchAccommodationsAXSettingsUpdate;
- (void)_showHoldDurationTripleClickHelp;
- (void)_updateTouchAccommodationsSetting;

@end
