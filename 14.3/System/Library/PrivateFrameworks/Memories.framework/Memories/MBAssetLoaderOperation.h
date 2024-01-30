@class NSURL, AVAsset, NSArray;

@interface MBAssetLoaderOperation : NSOperation

@property (getter=isFinished) BOOL finished;
@property (getter=isExecuting) BOOL executing;
@property (retain, nonatomic) NSURL *identifierURL;
@property (retain, nonatomic) AVAsset *asset;
@property (retain, nonatomic) NSArray *prefetchKeys;
@property (copy, nonatomic) id /* block */ preCompletionBlock;

- (void)finish;
- (void).cxx_destruct;
- (void)start;
- (BOOL)isConcurrent;
- (id)initWithIdentifierURL:(id)a0;

@end
