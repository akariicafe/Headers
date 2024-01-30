@class HMDService, NSString, NSMutableSet, NSObject, HMDHAPAccessory;
@protocol OS_dispatch_queue, HMDDataStreamSetupOperationDelegate;

@interface HMDDataStreamSetupOperation : NSObject

@property (readonly, nonatomic) HMDHAPAccessory *accessory;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSString *logIdentifier;
@property (readonly, nonatomic) HMDService *transferManagementService;
@property (readonly, nonatomic) NSMutableSet *pendingBulkSendListeners;
@property (weak, nonatomic) id<HMDDataStreamSetupOperationDelegate> delegate;

+ (id)tcpSetupOperationWithAccessory:(id)a0 queue:(id)a1 logIdentifier:(id)a2 transferManagementService:(id)a3;
+ (id)hapSetupOperationWithAccessory:(id)a0 queue:(id)a1 logIdentifier:(id)a2 transferManagementService:(id)a3 maxControllerTransportMTU:(unsigned long long)a4 setupOperationReadRequired:(BOOL)a5;

- (void)startSetup;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithAccessory:(id)a0 queue:(id)a1 logIdentifier:(id)a2 transferManagementService:(id)a3;
- (void)_clearPendingBulkSendListeners;
- (void)postDidFailWithError:(id)a0;
- (void)processTransportSetupResponse:(id)a0;
- (void)postDidSucceedWithTransport:(id)a0 sessionEncryption:(id)a1;
- (void)continueStreamSetupWithResponse:(id)a0;
- (void)cancelSetup;
- (void)addBulkSendListener:(id)a0 fileType:(id)a1;
- (BOOL)removeBulkSendListener:(id)a0;
- (void)movePendingBulkSendListenersToBulkSendProtocol:(id)a0;

@end
