@class NSArray, WKDOMDocument;

@interface WKDOMNode : NSObject {
    struct RefPtr<WebCore::Node, WTF::RawPtrTraits<WebCore::Node>, WTF::DefaultRefDerefTraits<WebCore::Node>> { struct Node *m_ptr; } _impl;
}

@property (readonly) WKDOMDocument *document;
@property (readonly) WKDOMNode *parentNode;
@property (readonly) WKDOMNode *firstChild;
@property (readonly) WKDOMNode *lastChild;
@property (readonly) WKDOMNode *previousSibling;
@property (readonly) WKDOMNode *nextSibling;
@property (readonly) NSArray *textRects;

- (id).cxx_construct;
- (void)dealloc;
- (id)_initWithImpl:(void *)a0;
- (void).cxx_destruct;
- (void)removeChild:(id)a0;
- (void)appendChild:(id)a0;
- (struct OpaqueWKBundleNodeHandle { } *)_copyBundleNodeHandleRef;
- (void)insertNode:(id)a0 before:(id)a1;

@end
