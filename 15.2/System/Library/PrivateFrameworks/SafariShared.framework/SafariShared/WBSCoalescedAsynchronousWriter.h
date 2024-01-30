@class NSString, NSDictionary, NSURL, NSObject;
@protocol WBSCoalescedAsynchronousWriterDelegate, OS_dispatch_group, OS_dispatch_source, OS_dispatch_queue;

@interface WBSCoalescedAsynchronousWriter : NSObject {
    NSObject<OS_dispatch_queue> *_diskAccessQueue;
    NSURL *_fileURL;
    id /* block */ _writerBlock;
    id /* block */ _dataSourceBlock;
    NSObject<OS_dispatch_queue> *_dataSourceQueue;
    NSDictionary *_fileResourceValues;
    id /* block */ _plistDictionarySourceBlock;
    unsigned long long _plistFormat;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_source> *_timer;
    double _writeDelayInterval;
    NSObject<OS_dispatch_group> *_writeGroup;
    struct unique_ptr<SafariShared::SuddenTerminationDisabler, std::default_delete<SafariShared::SuddenTerminationDisabler>> { struct __compressed_pair<SafariShared::SuddenTerminationDisabler *, std::default_delete<SafariShared::SuddenTerminationDisabler>> { struct SuddenTerminationDisabler *__value_; } __ptr_; } _suddenTerminationDisabler;
    BOOL _done;
    NSString *_name;
}

@property (weak, nonatomic) id<WBSCoalescedAsynchronousWriterDelegate> delegate;

- (void)_scheduleTimer;
- (void)_timerFired;
- (void)startScheduledWriteNowWithCompletionHandler:(id /* block */)a0;
- (void)_waitForWriteCompletion;
- (void)completePendingWriteSynchronously;
- (void)_invalidateTimer;
- (id)initWithName:(id)a0 fileURL:(id)a1 dataSourceBlock:(id /* block */)a2 writeDelayInterval:(double)a3;
- (id)_initWithName:(id)a0 fileURL:(id)a1 writerBlock:(id /* block */)a2 dataSourceQueue:(id)a3 dataSourceBlock:(id /* block */)a4 writeDelayInterval:(double)a5 fileResourceValues:(id)a6;
- (id)initWithName:(id)a0 fileURL:(id)a1 dataSourceQueue:(id)a2 dataSourceBlock:(id /* block */)a3 fileResourceValues:(id)a4;
- (void)performScheduledWriteSynchronously;
- (void)_writeData:(id)a0;
- (id)_initWithName:(id)a0 fileURL:(id)a1 writerBlock:(id /* block */)a2 dataSourceQueue:(id)a3 dataSourceBlock:(id /* block */)a4 plistDictionarySourceBlock:(id /* block */)a5 plistFormat:(unsigned long long)a6 writeDelayInterval:(double)a7 fileResourceValues:(id)a8;
- (id)initWithName:(id)a0 fileURL:(id)a1 dataSourceBlock:(id /* block */)a2;
- (void)_asynchronouslyWriteData:(id)a0 orPlistDictionary:(id)a1 completionHandler:(id /* block */)a2;
- (id)_synchronousDataOnDataSourceQueue;
- (void).cxx_destruct;
- (id)_dataFromDataSourceOnDataSourceQueue;
- (id)initWithName:(id)a0 writerBlock:(id /* block */)a1 dataSourceQueue:(id)a2 dataSourceBlock:(id /* block */)a3;
- (id)initWithName:(id)a0 fileURL:(id)a1 dataSourceQueue:(id)a2 dataSourceBlock:(id /* block */)a3;
- (id)_dataForPlistDictionary:(id)a0;
- (id)_plistDictionaryFromDataSourceOnDataSourceQueue;
- (void)_cancelPendingWriteSynchronouslyLeavingSuddenTerminationIntact;
- (void)dealloc;
- (void)scheduleWrite;
- (void)startScheduledWriteNow;
- (id).cxx_construct;
- (id)initWithName:(id)a0 writerBlock:(id /* block */)a1 dataSourceQueue:(id)a2 plistFormat:(unsigned long long)a3 plistDictionarySourceBlock:(id /* block */)a4;
- (id)initWithName:(id)a0 writerBlock:(id /* block */)a1 dataSourceBlock:(id /* block */)a2;
- (id)initWithName:(id)a0 fileURL:(id)a1 dataSourceQueue:(id)a2 plistFormat:(unsigned long long)a3 plistDictionarySourceBlock:(id /* block */)a4;
- (void)cancelPendingWriteSynchronously;

@end
