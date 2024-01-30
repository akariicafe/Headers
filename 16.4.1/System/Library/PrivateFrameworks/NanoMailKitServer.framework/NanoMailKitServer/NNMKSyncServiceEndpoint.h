@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, NNMKSyncServiceTransport, OS_dispatch_source;

@interface NNMKSyncServiceEndpoint : NSObject

@property (retain, nonatomic) NSString *idsServiceName;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serviceQueue;
@property (retain, nonatomic) id<NNMKSyncServiceTransport> serviceTransport;
@property (retain, nonatomic) NSMutableDictionary *repeatPreventionRecords;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *repeatPreventionCleanupTimer;
@property (readonly, nonatomic) unsigned long long connectivityState;

- (id)sendProtobufData:(id)a0 type:(unsigned long long)a1 priority:(unsigned long long)a2 timeoutCategory:(unsigned long long)a3 allowCloudDelivery:(BOOL)a4;
- (void)failedSendingProtobufWithIDSIdentifier:(id)a0 errorCode:(long long)a1;
- (void)readProtobufData:(id)a0 type:(unsigned long long)a1;
- (id)sendProtobufData:(id)a0 type:(unsigned long long)a1 priority:(unsigned long long)a2 timeout:(double)a3 allowCloudDelivery:(BOOL)a4;
- (void)successfullySentProtobufWithIDSIdentifier:(id)a0;
- (void)dealloc;
- (id)sendResourceAtURL:(id)a0 metadata:(id)a1 priority:(unsigned long long)a2 timeoutCategory:(unsigned long long)a3;
- (void).cxx_destruct;
- (void)syncServiceTransport:(id)a0 didSendProtobufSuccessfullyWithIdentifier:(id)a1;
- (void)_initializeServiceTransport;
- (void)_removeExpiredRepeatPreventionRecords;
- (void)_storeRepeatPreventionId:(id)a0 priority:(unsigned long long)a1;
- (BOOL)_willIdRepeat:(id)a0;
- (void)connectivityChanged;
- (id)initWithIDSServiceName:(id)a0 queue:(id)a1;
- (void)readResourceAtURL:(id)a0 metadata:(id)a1;
- (void)resetRepeatPreventionHistory;
- (id)sendProtobufData:(id)a0 type:(unsigned long long)a1 priority:(unsigned long long)a2 repeatPreventionId:(id)a3 timeoutCategory:(unsigned long long)a4 allowCloudDelivery:(BOOL)a5;
- (void)spaceBecameAvailable;
- (void)syncServiceTransport:(id)a0 didFailSendingProtobufWithIdentifier:(id)a1 errorCode:(long long)a2;
- (void)syncServiceTransport:(id)a0 didReadProtobufData:(id)a1 type:(unsigned long long)a2;
- (void)syncServiceTransport:(id)a0 didRecieveDataAtURL:(id)a1 metadata:(id)a2;
- (void)syncServiceTransportDidChangeConnectivity:(id)a0;
- (void)syncServiceTransportDidReportSpaceBecameAvailable:(id)a0;

@end
