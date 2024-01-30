@class NSString, NSMutableDictionary, CoreTelephonyClient, NSObject;
@protocol OS_dispatch_queue;

@interface PSUICoreTelephonyRegistrationCache : NSObject <CoreTelephonyClientRegistrationDelegate, CoreTelephonyClientDataDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) CoreTelephonyClient *client;
@property (retain) NSMutableDictionary *imsStatusVoiceDict;
@property (retain) NSMutableDictionary *imsStatusSMSDict;
@property (retain) NSMutableDictionary *rejectCauseCodeDict;
@property (retain) NSMutableDictionary *supportedDataRatesDict;
@property (retain) NSMutableDictionary *maxDataRateDict;
@property (retain) NSMutableDictionary *operatorNameDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)clearCache;
- (void)imsRegistrationChanged:(id)a0 info:(id)a1;
- (void)preferredDataSimChanged:(id)a0;
- (void)operatorNameChanged:(id)a0 name:(id)a1;
- (id)initPrivate;
- (void).cxx_destruct;
- (id)init;
- (id)localizedOperatorName:(id)a0;
- (id)supportedDataRates:(id)a0;
- (long long)maxDataRate:(id)a0;
- (void)setMaxDataRate:(id)a0 dataRate:(long long)a1;
- (void)handleDataUsageChanged;
- (void)fetchIMSStatus;
- (void)fetchRejectCauseCode;
- (void)fetchSupportedDataRates;
- (void)fetchMaxDataRate;
- (void)fetchLocalizedOperatorName;
- (BOOL)IMSStatusVoice:(id)a0;
- (BOOL)IMSStatusSMS:(id)a0;
- (id)rejectCauseCode:(id)a0;

@end
