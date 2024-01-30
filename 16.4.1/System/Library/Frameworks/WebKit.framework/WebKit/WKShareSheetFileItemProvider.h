@interface WKShareSheetFileItemProvider : UIActivityItemProvider {
    struct RetainPtr<NSURL> { void *m_ptr; } _url;
}

- (id)initWithURL:(id)a0;
- (id)item;
- (id).cxx_construct;
- (void).cxx_destruct;

@end
