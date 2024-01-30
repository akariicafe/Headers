@class VCPHomeKitAnalysisService, NSMapTable, NSString, HMFUnfairLock, NSObject;
@protocol OS_dispatch_queue;

@interface HMIAnalysisService : HMFObject <HMFLogging>

@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property int nextRequestID;
@property (readonly, nonatomic) HMFUnfairLock *lock;
@property (readonly) NSMapTable *requests;
@property (retain, nonatomic) VCPHomeKitAnalysisService *analysisService;
@property BOOL runRemotely;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (int)requestAnalysisForService:(id)a0 assetData:(id)a1 properties:(id)a2 completionHandler:(id /* block */)a3;

- (BOOL)cancelRequest:(int)a0;
- (id)expectedClasses;
- (id)init;
- (void).cxx_destruct;
- (int)requestAnalysisForAssetData:(id)a0 withProperties:(id)a1 andCompletionHandler:(id /* block */)a2;
- (int)getNextRequestID;
- (int)requestAnalysisForPixelBuffer:(struct __CVBuffer { } *)a0 withProperties:(id)a1 andCompletionHandler:(id /* block */)a2;

@end
