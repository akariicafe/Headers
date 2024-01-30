@interface WKEditCommand : NSObject {
    struct RefPtr<WebKit::WebEditCommandProxy, WTF::RawPtrTraits<WebKit::WebEditCommandProxy>, WTF::DefaultRefDerefTraits<WebKit::WebEditCommandProxy>> { struct WebEditCommandProxy *m_ptr; } _command;
}

- (void *)command;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithWebEditCommandProxy:(void *)a0;

@end
