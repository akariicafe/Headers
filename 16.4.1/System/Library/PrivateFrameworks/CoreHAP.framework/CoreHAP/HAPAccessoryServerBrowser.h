@class NSString, NSArray, HAPMetricsDispatcher, NSMutableSet, NSObject;
@protocol OS_dispatch_queue, HAPKeyStore;

@interface HAPAccessoryServerBrowser : HMFObject <HAPAccessoryServerNotification> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) NSMutableSet *pairedAccessoryIdentifiers;
@property (retain, nonatomic) id<HAPKeyStore> keyStore;
@property (readonly, nonatomic) HAPMetricsDispatcher *logEvent;
@property (nonatomic) BOOL remoteBrowsingEnabled;
@property (readonly, nonatomic) long long linkType;
@property (readonly, nonatomic) BOOL recommendBrowserReset;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setDelegate:(id)a0 queue:(id)a1;
- (void)stopDiscoveringAccessoryServers;
- (void)discoverAccessoryServerWithIdentifier:(id)a0;
- (id)logIdentifier;
- (void)startDiscoveringAccessoryServers;
- (void)deRegisterAccessoryWithIdentifier:(id)a0;
- (void)registerPairedAccessoryWithIdentifier:(id)a0;
- (void)indicateNotificationFromServer:(id)a0 notifyType:(unsigned long long)a1 withDictionary:(id)a2;
- (void)resetPairedAccessories;
- (void)matchAccessoryServerWithSetupID:(id)a0 serverIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)startConfirmingPairedAccessoryReachability;
- (void)stopConfirmingPairedAccessoryReachability;
- (BOOL)isPaired:(id)a0;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;

@end
