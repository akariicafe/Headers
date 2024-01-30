@class NSString, NSDictionary, __NSCFLocalDownloadFile, NSObject;
@protocol OS_dispatch_data;

@interface __NSCFLocalDownloadTask : __NSCFLocalSessionTask <NSURLSessionDownloadTaskSubclass, __NSCFLocalDownloadFileOpener> {
    id /* block */ _fileCompletion;
    NSObject<OS_dispatch_data> *_writeBuffer;
    unsigned long long _ioSuspend;
    long long _totalWrote;
    id /* block */ _resumeCallback;
    long long _initialResumeSize;
    NSDictionary *_originalResumeInfo;
    unsigned long long _transientWriteProgress;
    id /* block */ _afterDidReportProgressOnQueue;
    id /* block */ _dataAckCompletion;
    int _seqNo;
    BOOL _canWrite;
    BOOL _suppressProgress;
    BOOL _needFinish;
    BOOL _didIssueNeedFinish;
}

@property (retain) __NSCFLocalDownloadFile *downloadFile;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_expandResumeData:(id)a0;

- (void)_task_onqueue_didReceiveDispatchData:(id)a0 completionHandler:(id /* block */)a1;
- (void)_onqueue_willCacheResponse:(id)a0 withCompletion:(id /* block */)a1;
- (void)_onqueue_didReceiveResponse:(id)a0 completion:(id /* block */)a1;
- (void)_task_onqueue_didFinish;
- (void)_onqueue_completeInitialization;
- (BOOL)isKindOfClass:(Class)a0;
- (int)openItemForPath:(id)a0 mode:(int)a1;
- (void)dealloc;
- (const struct __CFDictionary { } *)_copySocketStreamProperties;
- (id)createResumeInformation:(id)a0;
- (void)_onqueue_cancelByProducingResumeData:(id /* block */)a0;
- (void)cancelByProducingResumeData:(id /* block */)a0;
- (void)terminateExtractorWithError:(id)a0 completion:(id /* block */)a1;

@end
