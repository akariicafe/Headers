@class HAP2SerializedOperationQueue, NSArray, NSString, HAP2PropertyLock, NSError, HAPPairSetupSession, HMFActivity;
@protocol HAP2AccessoryServerEncoding, HAP2AccessoryServerTransport, HAP2UnpairedAccessoryServer, HAP2AccessoryServerPairingDriverDelegate, HAP2AccessoryServerSecureTransportFactory;

@interface HAP2AccessoryServerPairingDriver : HAP2LoggingObject <HAP2Cancelable, HAP2AccessoryServerPairingDriverWorkItemInfo, HAP2AccessoryServerPairingDriver>

@property (readonly, nonatomic) unsigned long long authMethod;
@property (retain, nonatomic) HAP2SerializedOperationQueue *operationQueue;
@property (weak, nonatomic) id<HAP2UnpairedAccessoryServer> accessoryServer;
@property (weak, nonatomic) id<HAP2AccessoryServerPairingDriverDelegate> delegate;
@property (nonatomic) unsigned long long currentWorkItemIndex;
@property (readonly, nonatomic) NSArray *workItems;
@property (retain, nonatomic) NSError *cancelError;
@property (weak, nonatomic) HMFActivity *pairingActivity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) HAP2PropertyLock *propertyLock;
@property (retain, nonatomic) HAPPairSetupSession *pairingSession;
@property (readonly, nonatomic) id<HAP2AccessoryServerTransport> transport;
@property (readonly, nonatomic) id<HAP2AccessoryServerSecureTransportFactory> secureTransportFactory;
@property (readonly, nonatomic) id<HAP2AccessoryServerEncoding> encoding;
@property (readonly, nonatomic) unsigned long long featureFlags;

+ (id)_generateWorkItemsForAuthMethod:(unsigned long long)a0;

- (void)cancelWithError:(id)a0;
- (void).cxx_destruct;
- (void)_cancelWithError:(id)a0;
- (id)currentWorkItem;
- (id)initWithTransport:(id)a0 secureTransportFactory:(id)a1 encoding:(id)a2 featureFlags:(unsigned long long)a3;
- (void)_pairingFinishedWithError:(id)a0;
- (id)initWithTransport:(id)a0 secureTransportFactory:(id)a1 encoding:(id)a2 featureFlags:(unsigned long long)a3 workItems:(id)a4;
- (id)moveToNextWorkItem;
- (id)pairAccessory:(id)a0 delegate:(id)a1;
- (void)workItem:(id)a0 finishedWithError:(id)a1;

@end
