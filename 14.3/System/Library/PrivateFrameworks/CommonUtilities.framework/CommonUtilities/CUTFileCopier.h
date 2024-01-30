@class NSURL;
@protocol CUTFileCopierDelegate;

@interface CUTFileCopier : NSObject

@property void *_BOMCopier;
@property BOOL inProgress;
@property unsigned int operation;
@property (weak) id<CUTFileCopierDelegate> delegate;
@property (readonly, copy) NSURL *inputURL;
@property (readonly, copy) NSURL *outputURL;
@property (readonly) id identifier;
@property (readonly, nonatomic) BOOL wasCancelled;
@property (readonly, nonatomic) BOOL didErrorOccur;

- (void)cancel;
- (void).cxx_destruct;
- (void)cleanup;
- (void)dealloc;
- (void)start;
- (void)_fillOutputURLFromInputURL;
- (id)_temporaryCopierPath;
- (void)_worker_doCopy;
- (void)_main_copierFinishedWithResult:(id)a0;
- (id)initWithInputURL:(id)a0 outputURL:(id)a1 identifier:(id)a2 operation:(unsigned int)a3 delegate:(id)a4;

@end
