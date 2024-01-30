@interface WebVisiblePosition : NSObject {
    struct WebObjectInternal { } *_internal;
}

@property (nonatomic) unsigned long long affinity;

+ (id)_wrapVisiblePosition:(struct VisiblePosition { struct Position { struct RefPtr<WebCore::Node, WTF::DumbPtrTraits<WebCore::Node> > { struct Node *x0; } x0; unsigned int x1; unsigned char x2 : 3; unsigned char x3 : 1; } x0; int x1; })a0;
+ (id)_wrapVisiblePositionIfValid:(struct VisiblePosition { struct Position { struct RefPtr<WebCore::Node, WTF::DumbPtrTraits<WebCore::Node> > { struct Node *x0; } x0; unsigned int x1; unsigned char x2 : 3; unsigned char x3 : 1; } x0; int x1; })a0;

- (BOOL)isEditable;
- (id)positionAtStartOrEndOfWord;
- (void)dealloc;
- (BOOL)textDirection;
- (long long)compare:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (int)distanceFromPosition:(id)a0;
- (id)positionOfNextBoundaryOfGranularity:(int)a0 inDirection:(int)a1;
- (id)positionByMovingInDirection:(int)a0 amount:(unsigned int)a1;
- (BOOL)atBoundaryOfGranularity:(int)a0 inDirection:(int)a1;
- (id)enclosingTextUnitOfGranularity:(int)a0 inDirectionIfAtBoundary:(int)a1;
- (id)positionByMovingInDirection:(int)a0 amount:(unsigned int)a1 withAffinityDownstream:(BOOL)a2;
- (BOOL)withinTextUnitOfGranularity:(int)a0 inDirectionIfAtBoundary:(int)a1;
- (struct VisiblePosition { struct Position { struct RefPtr<WebCore::Node, WTF::DumbPtrTraits<WebCore::Node> > { struct Node *x0; } x0; unsigned int x1; unsigned char x2 : 3; unsigned char x3 : 1; } x0; int x1; })_visiblePosition;
- (BOOL)directionIsDownstream:(int)a0;
- (BOOL)requiresContextForWordBoundary;
- (BOOL)atAlphaNumericBoundaryInDirection:(int)a0;
- (id)enclosingRangeWithDictationPhraseAlternatives:(id *)a0;
- (id)enclosingRangeWithCorrectionIndicator;

@end
