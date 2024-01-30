@class NSURL;

@interface WKPreviewElementInfo : NSObject <NSCopying> {
    struct RetainPtr<NSURL> { void *m_ptr; } _linkURL;
}

@property (readonly, nonatomic) NSURL *linkURL;

- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)_initWithLinkURL:(id)a0;

@end
