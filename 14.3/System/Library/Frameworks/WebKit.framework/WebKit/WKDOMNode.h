@class NSArray, WKDOMDocument;

@interface WKDOMNode : NSObject {
    struct RefPtr<WebCore::Node, WTF::DumbPtrTraits<WebCore::Node> > { struct Node *m_ptr; } _impl;
}

@property (readonly) WKDOMDocument *document;
@property (readonly) WKDOMNode *parentNode;
@property (readonly) WKDOMNode *firstChild;
@property (readonly) WKDOMNode *lastChild;
@property (readonly) WKDOMNode *previousSibling;
@property (readonly) WKDOMNode *nextSibling;
@property (readonly) NSArray *textRects;

- (void).cxx_destruct;
- (void)dealloc;
- (void)appendChild:(id)a0;
- (id).cxx_construct;
- (void)removeChild:(id)a0;
- (id)_initWithImpl:(struct Node { void /* function */ **x0; struct Weak<WebCore::JSDOMObject> { struct WeakImpl *x0; } x1; unsigned int x2; unsigned int x3; struct ContainerNode *x4; struct TreeScope *x5; struct Node *x6; struct Node *x7; struct CompactPointerTuple<WebCore::RenderObject *, unsigned char> { unsigned long long x0; } x8; struct unique_ptr<WebCore::NodeRareData, WebCore::Node::NodeRareDataDeleter> { struct __compressed_pair<WebCore::NodeRareData *, WebCore::Node::NodeRareDataDeleter> { struct NodeRareData *x0; } x0; } x9; } *)a0;
- (void)insertNode:(id)a0 before:(id)a1;
- (struct OpaqueWKBundleNodeHandle { } *)_copyBundleNodeHandleRef;

@end
