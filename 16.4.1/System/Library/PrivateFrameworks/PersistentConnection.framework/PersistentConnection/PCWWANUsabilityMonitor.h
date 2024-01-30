@class CTXPCServiceSubscriptionContext, NSString, CUTWeakReference, PCInterfaceUsabilityMonitor, NSObject, CoreTelephonyClient;
@protocol PCInterfaceUsabilityMonitorDelegate, OS_dispatch_queue;

@interface PCWWANUsabilityMonitor : NSObject <CoreTelephonyClientDataDelegate, PCInterfaceUsabilityMonitorProtocol, PCInterfaceUsabilityMonitorDelegate> {
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSObject<OS_dispatch_queue> *_ivarQueue;
    NSObject<OS_dispatch_queue> *_monitorDelegateQueue;
    CUTWeakReference *_delegateReference;
    BOOL _isInCall;
    BOOL _isInHighPowerState;
    BOOL _trackUsability;
    unsigned long long _thresholdOffTransitionCount;
    double _trackedTimeInterval;
    NSString *_interfaceName;
    PCInterfaceUsabilityMonitor *_interfaceMonitor;
    unsigned int _currentDataBearerSoMask;
    int _powerlogCDRXToken;
    struct __CTServerConnection { } *_ctServerConnection;
    CoreTelephonyClient *_ctClient;
    int _wwanContextID;
    NSObject<OS_dispatch_queue> *_ctServerQueue;
    CTXPCServiceSubscriptionContext *_currentDataSimContext;
}

@property (readonly, nonatomic) int currentRAT;
@property (readonly, nonatomic) BOOL isLTEWithCDRX;
@property (readonly, nonatomic) unsigned long long interface5GMode;
@property (readonly, nonatomic) struct __CFString { } *wwanInterfaceName;
@property (readonly, nonatomic) NSString *networkCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL isRadioHot;
@property (nonatomic) id<PCInterfaceUsabilityMonitorDelegate> delegate;
@property (readonly, nonatomic) long long interfaceIdentifier;
@property (readonly, nonatomic) int linkQuality;
@property (readonly, nonatomic) BOOL isInterfaceUsable;
@property (readonly, nonatomic) BOOL isInterfaceHistoricallyUsable;
@property (readonly, nonatomic) BOOL isInternetReachable;
@property (readonly, retain, nonatomic) NSString *linkQualityString;
@property (readonly, nonatomic) BOOL isPoorLinkQuality;
@property (readonly, nonatomic) BOOL isBadLinkQuality;
@property (readonly, nonatomic) BOOL isNetworkingPowerExpensiveToUse;

- (void)currentDataSimChanged:(id)a0;
- (void)interfaceLinkQualityChanged:(id)a0 previousLinkQuality:(int)a1;
- (void)_forwardConfigurationOnIvarQueue;
- (BOOL)_isCurrentDataSimContextOnIvarQueue:(id)a0;
- (void)setThresholdOffTransitionCount:(unsigned long long)a0;
- (void)dataStatus:(id)a0 dataStatusInfo:(id)a1;
- (void)interfaceReachabilityChanged:(id)a0;
- (void)_processDataStatus:(id)a0 forContext:(id)a1;
- (id)initWithDelegateQueue:(id)a0;
- (void)setTrackUsability:(BOOL)a0;
- (void)_adjustInterfaceNameForWWANContextID:(int)a0 interfaceName:(id)a1 forContext:(id)a2;
- (void)dealloc;
- (void)setTrackedTimeInterval:(double)a0;
- (void)_callDelegateOnIvarQueueWithBlock:(id /* block */)a0;
- (void)_processDataConnectionStatus:(id)a0 forContext:(id)a1;
- (void)_processCallStatusChanged:(id)a0;
- (void)connectionStateChanged:(id)a0 connection:(int)a1 dataConnectionStatusInfo:(id)a2;
- (void)_setupWWANMonitor;
- (void).cxx_destruct;
- (id)_currentDataSimContext;

@end
