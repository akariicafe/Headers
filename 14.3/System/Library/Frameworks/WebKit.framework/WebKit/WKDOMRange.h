@class NSString, WKDOMNode, NSArray;

@interface WKDOMRange : NSObject {
    struct RefPtr<WebCore::Range, WTF::DumbPtrTraits<WebCore::Range> > { struct Range *m_ptr; } _impl;
}

@property (readonly, retain) WKDOMNode *startContainer;
@property (readonly) long long startOffset;
@property (readonly, retain) WKDOMNode *endContainer;
@property (readonly) long long endOffset;
@property (readonly, copy) NSString *text;
@property (readonly) BOOL isCollapsed;
@property (readonly) NSArray *textRects;

- (void).cxx_destruct;
- (void)dealloc;
- (void)collapse:(BOOL)a0;
- (void)setStart:(id)a0 offset:(int)a1;
- (void)setEnd:(id)a0 offset:(int)a1;
- (id)initWithDocument:(id)a0;
- (id).cxx_construct;
- (void)selectNodeContents:(id)a0;
- (void)selectNode:(id)a0;
- (id)_initWithImpl:(struct Range { unsigned int x0; struct Ref<WebCore::Document, WTF::DumbPtrTraits<WebCore::Document> > { struct Document *x0; } x1; struct RangeBoundaryPoint { struct RefPtr<WebCore::Node, WTF::DumbPtrTraits<WebCore::Node> > { struct Node *x0; } x0; struct Optional<unsigned int> { BOOL x0; union constexpr_storage_t<unsigned int> { unsigned char x0; unsigned int x1; } x1; } x1; struct RefPtr<WebCore::Node, WTF::DumbPtrTraits<WebCore::Node> > { struct Node *x0; } x2; } x2; struct RangeBoundaryPoint { struct RefPtr<WebCore::Node, WTF::DumbPtrTraits<WebCore::Node> > { struct Node *x0; } x0; struct Optional<unsigned int> { BOOL x0; union constexpr_storage_t<unsigned int> { unsigned char x0; unsigned int x1; } x1; } x1; struct RefPtr<WebCore::Node, WTF::DumbPtrTraits<WebCore::Node> > { struct Node *x0; } x2; } x3; } *)a0;
- (id)rangeByExpandingToWordBoundaryByCharacters:(unsigned long long)a0 inDirection:(long long)a1;
- (struct OpaqueWKBundleRangeHandle { } *)_copyBundleRangeHandleRef;

@end
