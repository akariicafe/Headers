@class CoreTelephonyClient, NSString, CTXPCServiceSubscriptionContext, CTSignalStrengthInfo, CTDataStatus, NSNumber, CTDataConnectionStatus;

@interface VCCTServiceMonitor : NSObject <CoreTelephonyClientRegistrationDelegate, CoreTelephonyClientDataDelegate> {
    CoreTelephonyClient *_ctClient;
    CTXPCServiceSubscriptionContext *_subscriptionContext;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _statusLock;
}

@property (readonly, nonatomic) NSNumber *inHomeCountry;
@property (readonly) CTDataStatus *dataStatus;
@property (readonly, nonatomic) CTDataConnectionStatus *connectionStatus;
@property (readonly, nonatomic) CTSignalStrengthInfo *signalStrength;
@property (readonly, nonatomic) BOOL supportsCellular;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int x0; } *statusLock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)dataStatus:(id)a0 dataStatusInfo:(id)a1;
- (void)internetConnectionStateChanged:(id)a0;
- (void)dealloc;
- (void)signalStrengthChanged:(id)a0 info:(id)a1;
- (id)init;
- (id)getCurrentDataSubscriptionContext;

@end
