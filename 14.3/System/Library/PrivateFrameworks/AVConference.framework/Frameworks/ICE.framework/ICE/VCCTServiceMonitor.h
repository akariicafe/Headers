@class CoreTelephonyClient, NSString, CTXPCServiceSubscriptionContext, CTSignalStrengthInfo, CTDataStatus, NSNumber, CTDataConnectionStatus;

@interface VCCTServiceMonitor : NSObject <CoreTelephonyClientRegistrationDelegate, CoreTelephonyClientDataDelegate> {
    CoreTelephonyClient *_ctClient;
    CTXPCServiceSubscriptionContext *_subscriptionContext;
}

@property (readonly, nonatomic) NSNumber *inHomeCountry;
@property (readonly, nonatomic) CTDataStatus *dataStatus;
@property (readonly, nonatomic) CTDataConnectionStatus *connectionStatus;
@property (readonly, nonatomic) CTSignalStrengthInfo *signalStrength;
@property (readonly, nonatomic) BOOL supportsCellular;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)getCurrentDataSubscriptionContext;
- (void)dataStatus:(id)a0 dataStatusInfo:(id)a1;
- (void)signalStrengthChanged:(id)a0 info:(id)a1;
- (id)init;
- (void)dealloc;
- (void)internetConnectionStateChanged:(id)a0;

@end
