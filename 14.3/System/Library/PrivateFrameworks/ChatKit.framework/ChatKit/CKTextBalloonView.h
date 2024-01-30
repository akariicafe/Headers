@class NSString, NSAttributedString, CKBalloonTextView;

@interface CKTextBalloonView : CKColoredBalloonView <CKBalloonTextViewInteractionDelegate, UITextViewDelegate, CKBalloonVibrancy>

@property (retain, nonatomic) CKBalloonTextView *textView;
@property (nonatomic) BOOL ignoreSelectionEvent;
@property (copy, nonatomic) NSAttributedString *attributedText;
@property (nonatomic) BOOL containsExcessiveLineHeightCharacters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)prepareForDisplay;
- (void)clearFilters;
- (id)updateTextSelectionState:(id)a0 forTextSelectionArea:(long long)a1;
- (BOOL)isSelected;
- (void).cxx_destruct;
- (void)addOverlaySubview:(id)a0;
- (void)setSelected:(BOOL)a0 withSelectionState:(id)a1;
- (void)updateRasterizationForInvisibleInkEffect;
- (void)addFilter:(id)a0;
- (void)configureForComposition:(id)a0;
- (void)prepareForReuse;
- (void)truncateForLargeText;
- (id)nonVibrantSubViews;
- (void)vibrantContainerWillReparentNonVibrantSubviews:(id)a0;
- (void)layoutSubviews;
- (Class)invisibleInkEffectViewClass;
- (void)invisibleInkEffectViewWasUncovered;
- (void)attachInvisibleInkEffectView;
- (void)detachInvisibleInkEffectView;
- (void)cullSubviewsWithVisibleBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0 textAlignmentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)a1 isSingleLine:(BOOL *)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)tapGestureRecognized:(id)a0;
- (void)textViewDidChangeSelection:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })targetTextContainerInsets;
- (void)interactionStartedFromPreviewItemControllerInTextView:(id)a0;
- (void)interactionStoppedFromPreviewItemControllerInTextView:(id)a0;
- (void)interactionStartedLongPressInTextView:(id)a0;
- (void)interactionStartedTapInTextView:(id)a0 withModifierFlags:(long long)a1 selectedText:(id)a2;
- (void)interactionTextViewShouldCopyToPasteboard:(id)a0;
- (void)interactionTextView:(id)a0 userDidDragOutsideViewWithPoint:(struct CGPoint { double x0; double x1; })a1;
- (double)textViewWidthForWidth:(double)a0;
- (void)restoreFromLargeTextTruncation;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0 textAlignmentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)a1;
- (void)configureForMessagePart:(id)a0;

@end
