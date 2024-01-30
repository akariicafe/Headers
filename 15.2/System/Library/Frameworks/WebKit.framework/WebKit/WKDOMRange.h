@class NSString, WKDOMNode, NSArray;

@interface WKDOMRange : NSObject {
    struct RefPtr<WebCore::Range, WTF::RawPtrTraits<WebCore::Range>, WTF::DefaultRefDerefTraits<WebCore::Range>> { struct Range *m_ptr; } _impl;
}

@property (readonly, retain) WKDOMNode *startContainer;
@property (readonly) long long startOffset;
@property (readonly, retain) WKDOMNode *endContainer;
@property (readonly) long long endOffset;
@property (readonly, copy) NSString *text;
@property (readonly) BOOL isCollapsed;
@property (readonly) NSArray *textRects;

- (void)collapse:(BOOL)a0;
- (void)setEnd:(id)a0 offset:(int)a1;
- (void)setStart:(id)a0 offset:(int)a1;
- (void).cxx_destruct;
- (void)selectNodeContents:(id)a0;
- (id)_initWithImpl:(void *)a0;
- (void)dealloc;
- (id)initWithDocument:(id)a0;
- (void)selectNode:(id)a0;
- (id)rangeByExpandingToWordBoundaryByCharacters:(unsigned long long)a0 inDirection:(long long)a1;
- (struct OpaqueWKBundleRangeHandle { } *)_copyBundleRangeHandleRef;
- (id).cxx_construct;

@end
