@class NSString, NSArray, HAPMetricsDispatcher, NSMutableSet, NSObject, HMFUnfairLock;
@protocol OS_dispatch_queue, HAPKeyStore;

@interface HAPAccessoryServerBrowser : HMFObject <HAPAccessoryServerNotification> {
    HMFUnfairLock *_lock;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) NSMutableSet *pairedAccessoryIdentifiers;
@property (retain, nonatomic) id<HAPKeyStore> keyStore;
@property (readonly, nonatomic) HAPMetricsDispatcher *logEvent;
@property (nonatomic) BOOL remoteBrowsingEnabled;
@property (readonly, nonatomic) long long linkType;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithQueue:(id)a0;
- (void)discoverAccessoryServerWithIdentifier:(id)a0;
- (void)deRegisterAccessoryWithIdentifier:(id)a0;
- (void)registerPairedAccessoryWithIdentifier:(id)a0;
- (void)startConfirmingPairedAccessoryReachability;
- (void)stopConfirmingPairedAccessoryReachability;
- (void)setDelegate:(id)a0 queue:(id)a1;
- (void)indicateNotificationFromServer:(id)a0 notifyType:(unsigned long long)a1 withDictionary:(id)a2;
- (void)stopDiscoveringAccessoryServers;
- (void)remoteBrowsingEnabledUpdated;
- (void)startDiscoveringAccessoryServers;
- (void)matchAccessoryServerWithSetupID:(id)a0 serverIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)resetPairedAccessories;
- (void).cxx_destruct;
- (BOOL)isPaired:(id)a0;

@end
