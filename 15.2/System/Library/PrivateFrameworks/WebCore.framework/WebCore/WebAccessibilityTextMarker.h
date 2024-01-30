@interface WebAccessibilityTextMarker : NSObject {
    void *_cache;
    struct TextMarkerData { unsigned long long axID; struct Node *node; unsigned int offset; int anchorType; BOOL affinity; int characterStartIndex; int characterOffset; BOOL ignored; } _textMarkerData;
}

+ (id)textMarkerWithVisiblePosition:(void *)a0 cache:(void *)a1;
+ (id)textMarkerWithCharacterOffset:(struct CharacterOffset { struct Node *x0; int x1; int x2; int x3; } *)a0 cache:(void *)a1;
+ (id)startOrEndTextMarkerForRange:(const void *)a0 isStart:(BOOL)a1 cache:(void *)a2;

- (id)dataRepresentation;
- (BOOL)isIgnored;
- (id)description;
- (id)initWithTextMarker:(struct TextMarkerData { unsigned long long x0; struct Node *x1; unsigned int x2; int x3; BOOL x4; int x5; int x6; BOOL x7; } *)a0 cache:(void *)a1;
- (id)initWithData:(id)a0 accessibilityObject:(id)a1;
- (struct VisiblePosition { struct Position { struct RefPtr<WebCore::Node, WTF::RawPtrTraits<WebCore::Node>, WTF::DefaultRefDerefTraits<WebCore::Node>> { struct Node *x0; } x0; unsigned int x1; unsigned char x2 : 3; unsigned char x3 : 1; } x0; BOOL x1; })visiblePosition;
- (struct CharacterOffset { struct Node *x0; int x1; int x2; int x3; })characterOffset;
- (void *)accessibilityObject;
- (id).cxx_construct;
- (id)initWithData:(id)a0 cache:(void *)a1;

@end
