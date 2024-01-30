@class HMDHAPAccessory, NSString, NSFileHandle, HMDAccessoryDiagnosticsSettings, HMDAccessoryDataStreamAdapter, NSDictionary, NSObject, NSNumber;
@protocol OS_dispatch_queue;

@interface HMDAccessoryDiagnosticsSession : HMFObject <HMFLogging, HMDAccessoryDataStreamAdapterDelegate>

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
- (void).cxx_destruct;
- (void)dealloc;
- (id)fileExtension;
- (id)attributeDescriptions;
- (id)logIdentifier;
- (BOOL)dataStreamAdapter:(id)a0 didReceiveData:(id)a1;
- (void)dataStreamAdapterDidFailDataRead:(id)a0;
- (void)dataStreamAdapterDidCompleteDataRead:(id)a0;
- (void)_callCompletionHandlerWithError:(id)a0;
- (BOOL)_validDataSequenceNumber:(id)a0;
- (BOOL)_handleReceivedData:(id)a0;
- (id)_createLogFile;
- (id)initWithAccessory:(id)a0 workQueue:(id)a1 settings:(id)a2;
- (void)setUpWithCompletion:(id /* block */)a0;
- (void)readDataWithCompletion:(id /* block */)a0;

@end
