@class NSString, NSDictionary, NSURL, NSObject;
@protocol WBSCoalescedAsynchronousWriterDelegate, OS_dispatch_group, OS_dispatch_source, OS_dispatch_queue;

@interface WBSCoalescedAsynchronousWriter : NSObject {
    NSObject<OS_dispatch_queue> *_diskAccessQueue;
    NSURL *_fileURL;
    id /* block */ _writerBlock;
    id /* block */ _dataSourceBlock;
    NSObject<OS_dispatch_queue> *_dataSourceQueue;
    NSDictionary *_fileResourceValues;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_source> *_timer;
    double _writeDelayInterval;
    NSObject<OS_dispatch_group> *_writeGroup;
    struct unique_ptr<SafariShared::SuddenTerminationDisabler, std::__1::default_delete<SafariShared::SuddenTerminationDisabler> > { struct __compressed_pair<SafariShared::SuddenTerminationDisabler *, std::__1::default_delete<SafariShared::SuddenTerminationDisabler> > { struct SuddenTerminationDisabler *__value_; } __ptr_; } _suddenTerminationDisabler;
    BOOL _done;
    NSString *_name;
}

@property (weak, nonatomic) id<WBSCoalescedAsynchronousWriterDelegate> delegate;

- (void)_timerFired;
- (id)initWithName:(id)a0 fileURL:(id)a1 dataSourceQueue:(id)a2 dataSourceBlock:(id /* block */)a3;
- (id)initWithName:(id)a0 writerBlock:(id /* block */)a1 dataSourceBlock:(id /* block */)a2;
- (void)performScheduledWriteSynchronously;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 fileURL:(id)a1 dataSourceQueue:(id)a2 dataSourceBlock:(id /* block */)a3 fileResourceValues:(id)a4;
- (void)_invalidateTimer;
- (void)dealloc;
- (void)_waitForWriteCompletion;
- (void)scheduleWrite;
- (id)initWithName:(id)a0 writerBlock:(id /* block */)a1 dataSourceQueue:(id)a2 dataSourceBlock:(id /* block */)a3;
- (id)_dataFromDataSource;
- (id)initWithName:(id)a0 fileURL:(id)a1 dataSourceBlock:(id /* block */)a2;
- (void)completePendingWriteSynchronously;
- (void)startScheduledWriteNowWithCompletionHandler:(id /* block */)a0;
- (void)_writeData:(id)a0;
- (id).cxx_construct;
- (void)cancelPendingWriteSynchronously;
- (id)initWithName:(id)a0 fileURL:(id)a1 dataSourceBlock:(id /* block */)a2 writeDelayInterval:(double)a3;
- (id)_initWithName:(id)a0 fileURL:(id)a1 writerBlock:(id /* block */)a2 dataSourceQueue:(id)a3 dataSourceBlock:(id /* block */)a4 writeDelayInterval:(double)a5 fileResourceValues:(id)a6;
- (void)startScheduledWriteNow;
- (void)_writeDataAsynchronously:(id)a0 completionHandler:(id /* block */)a1;
- (void)_scheduleTimer;
- (void)_cancelPendingWriteSynchronouslyLeavingSuddenTerminationIntact;

@end
