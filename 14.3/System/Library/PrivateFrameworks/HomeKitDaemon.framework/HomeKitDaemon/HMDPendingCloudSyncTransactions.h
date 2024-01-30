@class NSArray, NSMutableArray, HMDHomeManager;

@interface HMDPendingCloudSyncTransactions : HMFObject

@property (nonatomic) BOOL uploadInProgress;
@property (retain, nonatomic) NSMutableArray *pendingReasonsSaved;
@property (retain, nonatomic) NSMutableArray *deltaReasonsSaved;
@property (readonly, weak, nonatomic) HMDHomeManager *homeManager;
@property (readonly, nonatomic) NSArray *reasonsSaved;
@property (readonly, nonatomic) NSArray *allReasonsSaved;

+ (id)convertSaveReasonToTransationReason:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithHomeManager:(id)a0;
- (void)reset;
- (void)_addReasonSaved:(id)a0 information:(id)a1;
- (void)startUpload;
- (void)stopUploadAndClean;
- (void)stopUploadAndResume;
- (void)addReasonSaved:(id)a0 information:(id)a1;
- (void)loadReasonsSaved:(id)a0;

@end
