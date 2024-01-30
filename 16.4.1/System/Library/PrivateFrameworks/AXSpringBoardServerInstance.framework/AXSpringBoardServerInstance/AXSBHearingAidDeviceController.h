@class NSString, NSDictionary, NSTimer, NSObject;
@protocol OS_dispatch_queue;

@interface AXSBHearingAidDeviceController : NSObject <AXUIClientDelegate, AXHAServerDelegate> {
    double _routeChangedTime;
}

@property (nonatomic) BOOL shouldIgnoreRouteChanges;
@property (nonatomic) BOOL isShowingHearingAidControl;
@property (nonatomic) BOOL hearingAidIsConnected;
@property (nonatomic) BOOL holdingMediaForConnection;
@property (nonatomic) BOOL holdingPhoneForConnection;
@property (retain, nonatomic) NSDictionary *preferredRoute;
@property (retain, nonatomic) NSTimer *preferredRouteTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *mediaUpdateQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedController;

- (BOOL)isScreenLocked;
- (void)hearingServerDidDie:(id)a0;
- (void)startServer;
- (void)dealloc;
- (void)connectionWithServiceWasInterruptedForUserInterfaceClient:(id)a0;
- (id)hearingUIClient;
- (id)init;
- (void)_lockStateChanged;
- (void)liveListenStatusBarActivated:(id)a0;
- (id)userInterfaceClient:(id)a0 processMessageFromServer:(id)a1 withIdentifier:(unsigned long long)a2 error:(id *)a3;
- (void).cxx_destruct;
- (void)showHearingAidControl:(BOOL)a0;

@end
