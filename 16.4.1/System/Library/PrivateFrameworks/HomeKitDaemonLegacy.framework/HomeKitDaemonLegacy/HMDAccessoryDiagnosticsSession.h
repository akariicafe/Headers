@class HMDHAPAccessory, NSString, NSFileHandle, HMDAccessoryDiagnosticsSettings, HMDAccessoryDataStreamAdapter, NSDictionary, NSObject, NSNumber;
@protocol OS_dispatch_queue;

@interface HMDAccessoryDiagnosticsSession : HMFObject <HMFLogging, HMDAccessoryDataStreamAdapterDelegate>

@property (nonatomic) unsigned long long maxBytes;
@property (nonatomic) unsigned long long bytesWritten;
@property (readonly, weak) HMDHAPAccessory *accessory;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) NSString *reason;
@property (readonly) HMDAccessoryDiagnosticsSettings *settings;
@property (retain) HMDAccessoryDataStreamAdapter *dataStream;
@property (copy) id /* block */ pendingCompletionHandler;
@property (copy) NSString *filePath;
@property (copy) NSDictionary *urlParameters;
@property (retain) NSNumber *expectedDataSequenceNumber;
@property (retain) NSFileHandle *fileHandle;
@property BOOL readyForDataTransfer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)shutDown;
- (id)logIdentifier;
- (BOOL)_handleReceivedData:(id)a0;
- (void)dealloc;
- (id)attributeDescriptions;
- (void).cxx_destruct;
- (id)fileExtension;
- (id)_createLogFile;
- (void)_callCompletionHandlerWithError:(id)a0;
- (void)_setUpWithOptions:(id)a0 completion:(id /* block */)a1;
- (BOOL)_validDataSequenceNumber:(id)a0;
- (BOOL)dataStreamAdapter:(id)a0 didReceiveData:(id)a1;
- (void)dataStreamAdapterDidCompleteDataRead:(id)a0;
- (void)dataStreamAdapterDidFailDataRead:(id)a0;
- (id)initWithAccessory:(id)a0 workQueue:(id)a1 settings:(id)a2;
- (void)readDataWithCompletion:(id /* block */)a0;
- (void)setUpWithOptions:(id)a0 completion:(id /* block */)a1;

@end
