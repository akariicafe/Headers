@class NSMutableSet;

@interface SXTextTangierTextLayout : TSWPLayout

@property (retain, nonatomic) NSMutableSet *addedChildren;

- (void)validate;
- (struct CGSize { double x0; double x1; })maxSize;
- (void)invalidate;
- (void).cxx_destruct;
- (void)addAttachmentLayout:(id)a0;
- (BOOL)alwaysAllowWordSplit;
- (id)attachedLayoutsInLayout:(id)a0 anchored:(BOOL)a1;
- (double)baselineForLastLine;
- (id)currentAnchoredDrawableLayouts;
- (id)currentInlineDrawableLayouts;
- (void)drawableAttachment:(id)a0 didFinalizePosition:(struct CGPoint { double x0; double x1; })a1;
- (void)drawableAttachment:(id)a0 willStartNewIterationWithIndex:(unsigned long long)a1;
- (BOOL)drawableAttachment:(id)a0 withLayout:(id)a1 shouldPositionIterativelyInColumn:(id)a2;
- (struct __CFLocale { } *)hyphenationLocale;
- (void)invalidateTextLayout;
- (unsigned long long)iterativeAttachmentPositioningMaxPassCount;
- (id)layoutForInlineDrawable:(id)a0;
- (double)lineHeightGuessForFirstLine;
- (BOOL)pushAscendersIntoColumn;
- (BOOL)shouldPositionAttachmentsIteratively;
- (void)startedIterativePositioningProcessForDrawableAttachment:(id)a0;
- (id)validatedLayoutForAnchoredDrawable:(id)a0;
- (id)validatedLayoutForAttachedDrawable:(id)a0;

@end
