@class NSString, NSArray, NSMutableSet, HMFUnfairLock, NSObject;
@protocol OS_dispatch_queue, HAPKeyStore;

@interface HAPAccessoryServerBrowser : HMFObject <HAPAccessoryServerNotification> {
    HMFUnfairLock *_lock;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) NSMutableSet *pairedAccessoryIdentifiers;
@property (retain, nonatomic) id<HAPKeyStore> keyStore;
@property (readonly, nonatomic) long long linkType;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stopDiscoveringAccessoryServers;
- (void)setDelegate:(id)a0 queue:(id)a1;
- (void)stopConfirmingPairedAccessoryReachability;
- (id)initWithQueue:(id)a0;
- (void).cxx_destruct;
- (void)discoverAccessoryServerWithIdentifier:(id)a0;
- (void)startDiscoveringAccessoryServers;
- (void)deRegisterAccessoryWithIdentifier:(id)a0;
- (BOOL)isPaired:(id)a0;
- (void)matchAccessoryServerWithSetupID:(id)a0 serverIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)resetPairedAccessories;
- (void)startConfirmingPairedAccessoryReachability;
- (void)registerPairedAccessoryWithIdentifier:(id)a0;
- (void)indicateNotificationFromServer:(id)a0 notifyType:(unsigned long long)a1 withDictionary:(id)a2;

@end
