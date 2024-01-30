@class NSURL, NSObject;
@protocol OS_dispatch_queue, IMFileCopierDelegate;

@interface IMFileCopier : NSObject

@property void *_BOMCopier;
@property BOOL inProgress;
@property unsigned long long operation;
@property (copy) id /* block */ _callback;
@property (retain) NSObject<OS_dispatch_queue> *_queue;
@property id<IMFileCopierDelegate> delegate;
@property (readonly, retain) NSURL *inputURL;
@property (readonly, retain) NSURL *outputURL;
@property (readonly, retain) id identifier;
@property (readonly, nonatomic) BOOL wasCancelled;
@property (readonly, nonatomic) BOOL didErrorOccur;

- (void)_fillOutputURLFromInputURL;
- (id)initWithInputURL:(id)a0 outputURL:(id)a1 identifier:(id)a2 operation:(unsigned long long)a3 delegate:(id)a4;
- (void)cleanup;
- (void)_worker_doCopy;
- (void)_main_copierFinishedWithResult:(id)a0;
- (void)start;
- (id)initWithInputURL:(id)a0 outputURL:(id)a1 identifier:(id)a2 operation:(unsigned long long)a3 completionBlock:(id /* block */)a4 queue:(id)a5;
- (void).cxx_destruct;
- (id)_temporaryCopierPath;
- (void)dealloc;
- (void)cancel;

@end
