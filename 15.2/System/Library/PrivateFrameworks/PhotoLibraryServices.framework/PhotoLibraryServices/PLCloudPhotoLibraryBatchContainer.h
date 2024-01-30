@class CPLChangeBatch;

@interface PLCloudPhotoLibraryBatchContainer : NSObject

@property (retain, nonatomic) CPLChangeBatch *batch;
@property (nonatomic) unsigned long long retryCount;
@property (nonatomic) BOOL wasSplit;
@property (nonatomic) BOOL reachedMinSplit;
@property (nonatomic) BOOL wasFixed;

- (void)addRecord:(id)a0;
- (void)incrementRetryCount;
- (id)batchesSplitForError;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (unsigned long long)count;
- (id)lastAddedRecord;

@end
