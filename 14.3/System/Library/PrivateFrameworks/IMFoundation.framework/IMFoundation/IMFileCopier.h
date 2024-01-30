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

- (void)cancel;
- (void).cxx_destruct;
- (void)cleanup;
- (void)dealloc;
- (void)start;
- (void)_fillOutputURLFromInputURL;
- (id)_temporaryCopierPath;
- (void)_worker_doCopy;
- (void)_main_copierFinishedWithResult:(id)a0;
- (id)initWithInputURL:(id)a0 outputURL:(id)a1 identifier:(id)a2 operation:(unsigned long long)a3 delegate:(id)a4;
- (id)initWithInputURL:(id)a0 outputURL:(id)a1 identifier:(id)a2 operation:(unsigned long long)a3 completionBlock:(id /* block */)a4 queue:(id)a5;

@end
