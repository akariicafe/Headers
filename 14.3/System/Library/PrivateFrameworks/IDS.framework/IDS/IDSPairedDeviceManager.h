@class IDSXPCDaemonController, NSSet, NSString, _IDSCompletionHandler;

@interface IDSPairedDeviceManager : NSObject <IDSDaemonListenerProtocol> {
    _IDSCompletionHandler *_deleteCompletion;
    _IDSCompletionHandler *_localCompletion;
    _IDSCompletionHandler *_pairedCompletion;
    _IDSCompletionHandler *_deliveryStatsCompletion;
    NSSet *_allowedTrafficClassifiers;
}

@property (retain, nonatomic) IDSXPCDaemonController *xpcDaemonController;
@property (retain, nonatomic) NSSet *allowedTrafficClassifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)device:(id)a0 pairingDeleted:(BOOL)a1;
- (void)getLocalDeviceInfoWithCompletionBlock:(id /* block */)a0 queue:(id)a1;
- (void)constructRAResponseDictionary:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setPairedDeviceInfo:(id)a0;
- (void)dropAllMessagesWithoutAnyAllowedClassifier;
- (void)deliveryStats:(id)a0;
- (void)getDeliveryStatsWithCompletionBlock:(id /* block */)a0 queue:(id)a1;
- (void)deletePairedDevice:(id)a0 withCompletionBlock:(id /* block */)a1 queue:(id)a2;
- (void)getPairedDeviceInfoWithCompletionBlock:(id /* block */)a0 queue:(id)a1;

@end
