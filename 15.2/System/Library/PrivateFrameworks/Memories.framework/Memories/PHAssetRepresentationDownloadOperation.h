@class NSRecursiveLock, NSURL, NSError, PHAssetRepresentation;
@protocol PHAssetRepresentationDownloadOperationDelegate;

@interface PHAssetRepresentationDownloadOperation : NSOperation

@property (getter=isFailed) BOOL failed;
@property (retain) NSError *error;
@property (getter=isFinished) BOOL finished;
@property (getter=isExecuting) BOOL executing;
@property (retain) NSRecursiveLock *statusLock;
@property double progress;
@property (nonatomic) int imageRequestID;
@property (retain, nonatomic) NSURL *identifierURL;
@property (getter=isUserInitiated) BOOL userInitiated;
@property (weak, nonatomic) id<PHAssetRepresentationDownloadOperationDelegate> delegate;
@property (retain, nonatomic) PHAssetRepresentation *representation;

- (void)finish;
- (BOOL)isConcurrent;
- (void)start;
- (void).cxx_destruct;
- (void)cancel;
- (id)initWithRepresentation:(id)a0;

@end
