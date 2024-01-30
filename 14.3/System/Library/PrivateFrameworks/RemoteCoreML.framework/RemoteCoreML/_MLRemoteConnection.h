@class _MLNetworking, _MLNetworkPacket, NSMutableData, _MLNetworkOptions, NSObject;
@protocol OS_nw_connection, OS_dispatch_queue, OS_dispatch_semaphore;

@interface _MLRemoteConnection : NSObject

@property (readonly, nonatomic) NSObject<OS_nw_connection> *connection;
@property (readonly, nonatomic) _MLNetworking *nwObj;
@property (readonly, nonatomic) _MLNetworkOptions *nwOptions;
@property (readonly, nonatomic) _MLNetworkPacket *packet;
@property (retain, nonatomic) NSMutableData *outputResult;
@property (readonly, nonatomic) unsigned long long jobCount;
@property (readonly, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *q;

- (id)initWithOptions:(id)a0;
- (void).cxx_destruct;
- (BOOL)loadFromURL:(id)a0 options:(id)a1 error:(id *)a2;
- (void)doReceive:(id)a0 context:(id)a1 isComplete:(BOOL)a2 error:(id)a3;
- (BOOL)sendDataAndWaitForAcknowledgementOrTimeout:(id)a0;
- (BOOL)predictionFromURL:(id)a0 features:(id)a1 output:(id)a2 options:(id)a3 error:(id *)a4;
- (BOOL)unloadFromURL:(id)a0 options:(id)a1 error:(id *)a2;
- (void)send:(id)a0 options:(id)a1;

@end
