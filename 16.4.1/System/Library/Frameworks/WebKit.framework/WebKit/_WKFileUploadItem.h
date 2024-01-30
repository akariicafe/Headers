@interface _WKFileUploadItem : NSObject {
    struct RetainPtr<NSURL> { void *m_ptr; } _fileURL;
}

@property (readonly, nonatomic, getter=isVideo) BOOL video;
@property (readonly, nonatomic) struct RetainPtr<UIImage> { void *x0; } displayImage;

- (id)fileURL;
- (id).cxx_construct;
- (id)initWithFileURL:(id)a0;
- (void)setFileURL:(id)a0;
- (void).cxx_destruct;

@end
