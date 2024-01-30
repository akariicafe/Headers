@class NSURL;

@interface _WKFileUploadItem : NSObject {
    struct RetainPtr<NSURL> { void *m_ptr; } _fileURL;
}

@property (readonly, nonatomic, getter=isVideo) BOOL video;
@property (readonly, nonatomic) NSURL *fileURL;
@property (readonly, nonatomic) struct RetainPtr<UIImage> { void *x0; } displayImage;

- (void).cxx_destruct;
- (id)initWithFileURL:(id)a0;
- (id).cxx_construct;

@end
