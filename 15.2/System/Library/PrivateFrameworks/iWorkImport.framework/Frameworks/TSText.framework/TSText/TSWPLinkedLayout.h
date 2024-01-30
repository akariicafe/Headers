@class TSWPLayoutManager;

@interface TSWPLinkedLayout : TSWPLayout

@property (retain, nonatomic) TSWPLayoutManager *layoutManager;
@property (nonatomic) BOOL textLayoutValid;

- (id)layoutManager;
- (void)validate;
- (BOOL)isLinked;
- (void)setLayoutManager:(id)a0;
- (BOOL)isLastTarget;
- (id)previousTargetLastColumn;
- (id)nextTargetFirstColumn;
- (void)wrappableChildInvalidated:(id)a0;
- (void)willBeRemovedFromLayoutController:(id)a0;
- (BOOL)isOverflowing;
- (BOOL)descendersCannotClip;
- (BOOL)repShouldPreventCaret;
- (void)i_validateTextLayout;
- (void)killDrawableLayouts:(id)a0;
- (void)setTextLayoutValid:(BOOL)a0;
- (BOOL)discardLayoutsForDrawableAttachmentsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;

@end
