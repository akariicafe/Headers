@interface WKFileUploadMediaTranscoder : NSObject {
    struct RetainPtr<NSTimer> { void *m_ptr; } _progressTimer;
    struct RetainPtr<PUActivityProgressController> { void *m_ptr; } _progressController;
    struct RetainPtr<AVAssetExportSession> { void *m_ptr; } _exportSession;
    struct RetainPtr<NSArray<_WKFileUploadItem *>> { void *m_ptr; } _items;
    struct RetainPtr<NSString> { void *m_ptr; } _temporaryDirectoryPath;
    struct Function<void (NSArray<_WKFileUploadItem *> *)> { struct unique_ptr<WTF::Detail::CallableWrapperBase<void, NSArray<_WKFileUploadItem *> *>, std::default_delete<WTF::Detail::CallableWrapperBase<void, NSArray<_WKFileUploadItem *> *>>> { struct __compressed_pair<WTF::Detail::CallableWrapperBase<void, NSArray<_WKFileUploadItem *> *> *, std::default_delete<WTF::Detail::CallableWrapperBase<void, NSArray<_WKFileUploadItem *> *>>> { void *__value_; } __ptr_; } m_callableWrapper; } _completionHandler;
    unsigned long long _videoCount;
    unsigned long long _processedVideoCount;
}

- (id).cxx_construct;
- (void)start;
- (void).cxx_destruct;
- (void)_dismissProgress;
- (void)_finishedProcessing;
- (void)_processItemAtIndex:(unsigned long long)a0;
- (id)_temporaryDirectoryCreateIfNecessary;
- (void)_updateProgress:(id)a0;
- (id)initWithItems:(id)a0 videoCount:(unsigned long long)a1 completionHandler:(void *)a2;

@end
