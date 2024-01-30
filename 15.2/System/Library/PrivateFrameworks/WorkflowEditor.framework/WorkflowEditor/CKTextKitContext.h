@class NSTextContainer, NSLayoutManager, NSTextStorage;

@interface CKTextKitContext : NSObject {
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _textKitMutex;
    NSLayoutManager *_layoutManager;
    NSTextStorage *_textStorage;
    NSTextContainer *_textContainer;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithAttributedString:(id)a0 lineBreakMode:(long long)a1 maximumNumberOfLines:(unsigned long long)a2 constrainedSize:(struct CGSize { double x0; double x1; })a3 layoutManagerFactory:(void /* function */ *)a4;
- (void)performBlockWithLockedTextKitComponents:(id /* block */)a0;

@end
