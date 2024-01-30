@class NSString;

@interface WebKitFullScreenListener : NSObject <WebKitFullScreenListener> {
    struct RefPtr<WebCore::Element, WTF::DumbPtrTraits<WebCore::Element> > { struct Element *m_ptr; } _element;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithElement:(struct Element { void /* function */ **x0; struct Weak<WebCore::JSDOMObject> { struct WeakImpl *x0; } x1; unsigned int x2; unsigned int x3; struct ContainerNode *x4; struct TreeScope *x5; struct Node *x6; struct Node *x7; struct CompactPointerTuple<WebCore::RenderObject *, unsigned char> { unsigned long long x0; } x8; struct unique_ptr<WebCore::NodeRareData, WebCore::Node::NodeRareDataDeleter> { struct __compressed_pair<WebCore::NodeRareData *, WebCore::Node::NodeRareDataDeleter> { struct NodeRareData *x0; } x0; } x9; struct WeakPtrFactory<WebCore::ContainerNode, WTF::EmptyCounter> { struct RefPtr<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::DumbPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter> > > { struct WeakPtrImpl<WTF::EmptyCounter> *x0; } x0; } x10; struct Node *x11; struct Node *x12; struct QualifiedName { struct RefPtr<WebCore::QualifiedName::QualifiedNameImpl, WTF::DumbPtrTraits<WebCore::QualifiedName::QualifiedNameImpl> > { struct QualifiedNameImpl *x0; } x0; } x13; struct RefPtr<WebCore::ElementData, WTF::DumbPtrTraits<WebCore::ElementData> > { struct ElementData *x0; } x14; } *)a0;
- (void)webkitWillEnterFullScreen;
- (void)webkitDidEnterFullScreen;
- (void)webkitWillExitFullScreen;
- (void)webkitDidExitFullScreen;

@end
