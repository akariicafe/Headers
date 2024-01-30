@class NSString, UIImage;

@interface WKQLThumbnailLoadOperation : NSOperation {
    struct RetainPtr<NSURL> { void *m_ptr; } _filePath;
    struct RetainPtr<NSString> { void *m_ptr; } _identifier;
    struct RetainPtr<NSFileWrapper> { void *m_ptr; } _fileWrapper;
    struct RetainPtr<UIImage> { void *m_ptr; } _thumbnail;
    BOOL _shouldWrite;
}

@property (getter=isExecuting) BOOL executing;
@property (getter=isFinished) BOOL finished;
@property (readonly, getter=isAsynchronous) BOOL asynchronous;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, retain, nonatomic) UIImage *thumbnail;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)start;
- (id)initWithAttachment:(id)a0 identifier:(id)a1;
- (id)initWithURL:(id)a0 identifier:(id)a1;

@end
