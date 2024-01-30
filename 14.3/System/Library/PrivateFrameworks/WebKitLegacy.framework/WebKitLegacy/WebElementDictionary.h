@class NSMutableDictionary, NSMutableSet;

@interface WebElementDictionary : NSDictionary {
    struct HitTestResult { struct HitTestLocation { struct LayoutPoint { struct LayoutUnit { int x0; } x0; struct LayoutUnit { int x0; } x1; } x0; struct IntRect { struct IntPoint { int x0; int x1; } x0; struct IntSize { int x0; int x1; } x1; } x1; struct FloatPoint { float x0; float x1; } x2; struct FloatQuad { struct FloatPoint { float x0; float x1; } x0; struct FloatPoint { float x0; float x1; } x1; struct FloatPoint { float x0; float x1; } x2; struct FloatPoint { float x0; float x1; } x3; } x3; BOOL x4; BOOL x5; } x0; struct RefPtr<WebCore::Node, WTF::DumbPtrTraits<WebCore::Node> > { struct Node *x0; } x1; struct RefPtr<WebCore::Node, WTF::DumbPtrTraits<WebCore::Node> > { struct Node *x0; } x2; struct LayoutPoint { struct LayoutUnit { int x0; } x0; struct LayoutUnit { int x0; } x1; } x3; struct LayoutPoint { struct LayoutUnit { int x0; } x0; struct LayoutUnit { int x0; } x1; } x4; struct RefPtr<WebCore::Element, WTF::DumbPtrTraits<WebCore::Element> > { struct Element *x0; } x5; struct RefPtr<WebCore::Scrollbar, WTF::DumbPtrTraits<WebCore::Scrollbar> > { struct Scrollbar *x0; } x6; BOOL x7; struct unique_ptr<WTF::ListHashSet<WTF::Ref<WebCore::Node, WTF::DumbPtrTraits<WebCore::Node> >, WTF::DefaultHash<WTF::Ref<WebCore::Node, WTF::DumbPtrTraits<WebCore::Node> > > >, std::__1::default_delete<WTF::ListHashSet<WTF::Ref<WebCore::Node, WTF::DumbPtrTraits<WebCore::Node> >, WTF::DefaultHash<WTF::Ref<WebCore::Node, WTF::DumbPtrTraits<WebCore::Node> > > > > > { struct __compressed_pair<WTF::ListHashSet<WTF::Ref<WebCore::Node, WTF::DumbPtrTraits<WebCore::Node> >, WTF::DefaultHash<WTF::Ref<WebCore::Node, WTF::DumbPtrTraits<WebCore::Node> > > > *, std::__1::default_delete<WTF::ListHashSet<WTF::Ref<WebCore::Node, WTF::DumbPtrTraits<WebCore::Node> >, WTF::DefaultHash<WTF::Ref<WebCore::Node, WTF::DumbPtrTraits<WebCore::Node> > > > > > { struct ListHashSet<WTF::Ref<WebCore::Node, WTF::DumbPtrTraits<WebCore::Node> >, WTF::DefaultHash<WTF::Ref<WebCore::Node, WTF::DumbPtrTraits<WebCore::Node> > > > *x0; } x0; } x8; } *_result;
    NSMutableDictionary *_cache;
    NSMutableSet *_nilValues;
    BOOL _cacheComplete;
}

+ (void)initialize;
+ (void)initializeLookupTable;

- (id)objectForKey:(id)a0;
- (id)_isSelected;
- (id)keyEnumerator;
- (void)dealloc;
- (id)_textContent;
- (id)_title;
- (unsigned long long)count;
- (id)_domNode;
- (id)initWithHitTestResult:(const struct HitTestResult { struct HitTestLocation { struct LayoutPoint { struct LayoutUnit { int x0; } x0; struct LayoutUnit { int x0; } x1; } x0; struct IntRect { struct IntPoint { int x0; int x1; } x0; struct IntSize { int x0; int x1; } x1; } x1; struct FloatPoint { float x0; float x1; } x2; struct FloatQuad { struct FloatPoint { float x0; float x1; } x0; struct FloatPoint { float x0; float x1; } x1; struct FloatPoint { float x0; float x1; } x2; struct FloatPoint { float x0; float x1; } x3; } x3; BOOL x4; BOOL x5; } x0; struct RefPtr<WebCore::Node, WTF::DumbPtrTraits<WebCore::Node> > { struct Node *x0; } x1; struct RefPtr<WebCore::Node, WTF::DumbPtrTraits<WebCore::Node> > { struct Node *x0; } x2; struct LayoutPoint { struct LayoutUnit { int x0; } x0; struct LayoutUnit { int x0; } x1; } x3; struct LayoutPoint { struct LayoutUnit { int x0; } x0; struct LayoutUnit { int x0; } x1; } x4; struct RefPtr<WebCore::Element, WTF::DumbPtrTraits<WebCore::Element> > { struct Element *x0; } x5; struct RefPtr<WebCore::Scrollbar, WTF::DumbPtrTraits<WebCore::Scrollbar> > { struct Scrollbar *x0; } x6; BOOL x7; struct unique_ptr<WTF::ListHashSet<WTF::Ref<WebCore::Node, WTF::DumbPtrTraits<WebCore::Node> >, WTF::DefaultHash<WTF::Ref<WebCore::Node, WTF::DumbPtrTraits<WebCore::Node> > > >, std::__1::default_delete<WTF::ListHashSet<WTF::Ref<WebCore::Node, WTF::DumbPtrTraits<WebCore::Node> >, WTF::DefaultHash<WTF::Ref<WebCore::Node, WTF::DumbPtrTraits<WebCore::Node> > > > > > { struct __compressed_pair<WTF::ListHashSet<WTF::Ref<WebCore::Node, WTF::DumbPtrTraits<WebCore::Node> >, WTF::DefaultHash<WTF::Ref<WebCore::Node, WTF::DumbPtrTraits<WebCore::Node> > > > *, std::__1::default_delete<WTF::ListHashSet<WTF::Ref<WebCore::Node, WTF::DumbPtrTraits<WebCore::Node> >, WTF::DefaultHash<WTF::Ref<WebCore::Node, WTF::DumbPtrTraits<WebCore::Node> > > > > > { struct ListHashSet<WTF::Ref<WebCore::Node, WTF::DumbPtrTraits<WebCore::Node> >, WTF::DefaultHash<WTF::Ref<WebCore::Node, WTF::DumbPtrTraits<WebCore::Node> > > > *x0; } x0; } x8; } *)a0;
- (id)_webFrame;
- (id)_altDisplayString;
- (id)_absoluteImageURL;
- (id)_absoluteMediaURL;
- (id)_spellingToolTip;
- (id)_absoluteLinkURL;
- (id)_targetWebFrame;
- (id)_titleDisplayString;
- (id)_isLiveLink;
- (id)_isContentEditable;
- (id)_isInScrollBar;
- (void)_fillCache;

@end
