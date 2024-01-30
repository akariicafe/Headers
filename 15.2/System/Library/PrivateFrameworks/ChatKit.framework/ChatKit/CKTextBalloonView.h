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
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0 textAlignmentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0 textAlignmentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)a1 isSingleLine:(BOOL *)a2;
- (void)tapGestureRecognized:(id)a0;
- (void)configureForComposition:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (Class)invisibleInkEffectViewClass;
- (void)invisibleInkEffectViewWasUncovered;
- (void)attachInvisibleInkEffectView;
- (void)detachInvisibleInkEffectView;
- (void)cullSubviewsWithVisibleBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)addFilter:(id)a0;
- (void).cxx_destruct;
- (void)textViewDidChangeSelection:(id)a0;
- (id)nonVibrantSubViews;
- (void)vibrantContainerWillReparentNonVibrantSubviews:(id)a0;
- (void)setSelected:(BOOL)a0 withSelectionState:(id)a1;
- (void)addOverlaySubview:(id)a0;
- (void)updateRasterizationForInvisibleInkEffect;
- (id)updateTextSelectionState:(id)a0 forTextSelectionArea:(long long)a1;
- (void)prepareForReuse;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (void)truncateForLargeText;
- (BOOL)isSelected;
- (void)clearFilters;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })targetTextContainerInsets;
- (void)interactionStartedFromPreviewItemControllerInTextView:(id)a0;
- (void)interactionStoppedFromPreviewItemControllerInTextView:(id)a0;
- (void)configureForMessagePart:(id)a0;
- (void)interactionStartedLongPressInTextView:(id)a0;
- (void)interactionStartedTapInTextView:(id)a0 withModifierFlags:(long long)a1 selectedText:(id)a2;
- (double)textViewWidthForWidth:(double)a0;
- (void)interactionTextViewShouldCopyToPasteboard:(id)a0;
- (void)interactionTextView:(id)a0 userDidDragOutsideViewWithPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)restoreFromLargeTextTruncation;

@end
