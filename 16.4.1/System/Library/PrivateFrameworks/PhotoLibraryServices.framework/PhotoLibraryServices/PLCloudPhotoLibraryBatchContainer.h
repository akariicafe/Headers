@class CPLChangeBatch;

@interface PLCloudPhotoLibraryBatchContainer : NSObject

@property (retain, nonatomic) CPLChangeBatch *batch;
@property (nonatomic) unsigned long long retryCount;
@property (nonatomic) BOOL wasSplit;
@property (nonatomic) BOOL reachedMinSplit;
@property (nonatomic) BOOL wasFixed;

- (void)addRecord:(id)a0;
- (id)batchesSplitForError;
- (unsigned long long)count;
- (id)lastAddedRecord;
- (id)init;
- (void)incrementRetryCount;
- (id)description;
- (void).cxx_destruct;

@end
