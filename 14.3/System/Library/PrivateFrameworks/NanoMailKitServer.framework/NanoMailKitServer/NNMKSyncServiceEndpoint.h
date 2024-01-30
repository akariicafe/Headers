@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, NNMKSyncServiceTransport, OS_dispatch_source;

@interface NNMKSyncServiceEndpoint : NSObject

@property (retain, nonatomic) NSString *idsServiceName;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serviceQueue;
@property (retain, nonatomic) id<NNMKSyncServiceTransport> serviceTransport;
@property (retain, nonatomic) NSMutableDictionary *repeatPreventionRecords;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *repeatPreventionCleanupTimer;
@property (readonly, nonatomic) unsigned long long connectivityState;

- (void).cxx_destruct;
- (void)dealloc;
- (void)failedSendingProtobufWithIDSIdentifier:(id)a0 errorCode:(long long)a1;
- (void)spaceBecameAvailable;
- (void)connectivityChanged;
- (id)sendProtobufData:(id)a0 type:(unsigned long long)a1 priority:(unsigned long long)a2 timeout:(double)a3 allowCloudDelivery:(BOOL)a4;
- (id)sendProtobufData:(id)a0 type:(unsigned long long)a1 priority:(unsigned long long)a2 timeoutCategory:(unsigned long long)a3 allowCloudDelivery:(BOOL)a4;
- (void)successfullySentProtobufWithIDSIdentifier:(id)a0;
- (void)readProtobufData:(id)a0 type:(unsigned long long)a1;
- (id)initWithIDSServiceName:(id)a0 queue:(id)a1;
- (id)sendProtobufData:(id)a0 type:(unsigned long long)a1 priority:(unsigned long long)a2 repeatPreventionId:(id)a3 timeoutCategory:(unsigned long long)a4 allowCloudDelivery:(BOOL)a5;
- (void)_initializeServiceTransport;
- (void)_removeExpiredRepeatPreventionRecords;
- (BOOL)_willIdRepeat:(id)a0;
- (void)_storeRepeatPreventionId:(id)a0 priority:(unsigned long long)a1;
- (void)resetRepeatPreventionHistory;
- (void)syncServiceTransport:(id)a0 didReadProtobufData:(id)a1 type:(unsigned long long)a2;
- (void)syncServiceTransport:(id)a0 didSendProtobufSuccessfullyWithIdentifier:(id)a1;
- (void)syncServiceTransport:(id)a0 didFailSendingProtobufWithIdentifier:(id)a1 errorCode:(long long)a2;
- (void)syncServiceTransportDidReportSpaceBecameAvailable:(id)a0;
- (void)syncServiceTransportDidChangeConnectivity:(id)a0;

@end
