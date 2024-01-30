@class NSMutableDictionary, NSString, CTXPCServiceSubscriptionInfo, CTXPCServiceSubscriptionContext, CoreTelephonyClient;

@interface PSSimStatusCache : NSObject <CoreTelephonyClientDelegate, CoreTelephonyClientSubscriberDelegate>

@property (retain, nonatomic) CoreTelephonyClient *coreTelephonyClient;
@property (copy) CTXPCServiceSubscriptionInfo *subscriptionInfo;
@property (retain) NSMutableDictionary *simStatusDict;
@property (retain) CTXPCServiceSubscriptionContext *currentDataSubscriptionContext;
@property (retain) CTXPCServiceSubscriptionContext *userDefaultVoiceSubscriptionContext;
@property (retain) NSMutableDictionary *simHardwareTypeDict;
@property (nonatomic) BOOL isAnySimPresent;
@property (readonly, nonatomic) BOOL isDualSimCapable;
@property (readonly, nonatomic) BOOL isSIMMissing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)willEnterForeground;
- (void)currentDataSimChanged:(id)a0;
- (id)subscriptionsInUse;
- (void)simStatusDidChange:(id)a0 status:(id)a1;
- (void)subscriptionInfoDidChange;
- (void)preferredDataSimChanged:(id)a0;
- (id)activeDataSubscriptionContext;
- (id)simStatus:(id)a0;
- (void)fetchActiveDataSubscriptionContextIfNeeded;
- (void)clearSubscriptionContextCache;
- (id)subscriptionContexts;
- (id)getLogger;
- (void)fetchSimHardwareInfo;
- (id)initPrivate;
- (void)fetchSimStatus;
- (BOOL)isSlotActiveDataSlot:(long long)a0;
- (void)fetchSubscriptionContexts;
- (id)initWithCoreTelephonyClient:(id)a0;
- (id)init;
- (long long)simHardwareInfo:(id)a0;
- (void)fetchDefaultVoiceSubscriptionContextIfNeeded;
- (void)updateIsAnySimPresent;
- (id)defaultVoiceSubscriptionContext;
- (void).cxx_destruct;
- (void)clearSimHardwareInfoCache;

@end
