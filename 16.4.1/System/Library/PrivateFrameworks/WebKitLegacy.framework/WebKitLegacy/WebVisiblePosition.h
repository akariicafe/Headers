@interface WebVisiblePosition : NSObject {
    struct WebObjectInternal { } *_internal;
}

@property (nonatomic) unsigned long long affinity;

+ (id)_wrapVisiblePosition:(struct VisiblePosition { struct Position { struct RefPtr<WebCore::Node, WTF::RawPtrTraits<WebCore::Node>, WTF::DefaultRefDerefTraits<WebCore::Node>> { struct Node *x0; } x0; unsigned int x1; unsigned char x2 : 3; unsigned char x3 : 1; } x0; BOOL x1; })a0;
+ (id)_wrapVisiblePositionIfValid:(struct VisiblePosition { struct Position { struct RefPtr<WebCore::Node, WTF::RawPtrTraits<WebCore::Node>, WTF::DefaultRefDerefTraits<WebCore::Node>> { struct Node *x0; } x0; unsigned int x1; unsigned char x2 : 3; unsigned char x3 : 1; } x0; BOOL x1; })a0;

- (BOOL)isEditable;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (long long)compare:(id)a0;
- (id)description;
- (BOOL)atBoundaryOfGranularity:(int)a0 inDirection:(int)a1;
- (int)distanceFromPosition:(id)a0;
- (id)enclosingTextUnitOfGranularity:(int)a0 inDirectionIfAtBoundary:(int)a1;
- (id)positionAtStartOrEndOfWord;
- (id)positionByMovingInDirection:(int)a0 amount:(unsigned int)a1;
- (id)positionByMovingInDirection:(int)a0 amount:(unsigned int)a1 withAffinityDownstream:(BOOL)a2;
- (id)positionOfNextBoundaryOfGranularity:(int)a0 inDirection:(int)a1;
- (BOOL)withinTextUnitOfGranularity:(int)a0 inDirectionIfAtBoundary:(int)a1;
- (BOOL)textDirection;
- (struct VisiblePosition { struct Position { struct RefPtr<WebCore::Node, WTF::RawPtrTraits<WebCore::Node>, WTF::DefaultRefDerefTraits<WebCore::Node>> { struct Node *x0; } x0; unsigned int x1; unsigned char x2 : 3; unsigned char x3 : 1; } x0; BOOL x1; })_visiblePosition;
- (BOOL)atAlphaNumericBoundaryInDirection:(int)a0;
- (BOOL)directionIsDownstream:(int)a0;
- (id)enclosingRangeWithCorrectionIndicator;
- (id)enclosingRangeWithDictationPhraseAlternatives:(id *)a0;
- (BOOL)requiresContextForWordBoundary;

@end
