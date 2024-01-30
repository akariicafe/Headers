@class NSMutableSet;

@interface SXTextTangierTextLayout : TSWPLayout

@property (retain, nonatomic) NSMutableSet *addedChildren;

- (void)validate;
- (struct CGSize { double x0; double x1; })maxSize;
- (void).cxx_destruct;
- (void)invalidate;
- (void)invalidateTextLayout;
- (double)baselineForLastLine;
- (id)attachedLayoutsInLayout:(id)a0 anchored:(BOOL)a1;
- (id)validatedLayoutForAttachedDrawable:(id)a0;
- (void)addAttachmentLayout:(id)a0;
- (double)lineHeightGuessForFirstLine;
- (BOOL)shouldPositionAttachmentsIteratively;
- (unsigned long long)iterativeAttachmentPositioningMaxPassCount;
- (struct __CFLocale { } *)hyphenationLocale;
- (id)currentInlineDrawableLayouts;
- (id)currentAnchoredDrawableLayouts;
- (id)validatedLayoutForAnchoredDrawable:(id)a0;
- (id)layoutForInlineDrawable:(id)a0;
- (BOOL)alwaysAllowWordSplit;
- (BOOL)pushAscendersIntoColumn;
- (void)startedIterativePositioningProcessForDrawableAttachment:(id)a0;
- (void)drawableAttachment:(id)a0 willStartNewIterationWithIndex:(unsigned long long)a1;
- (void)drawableAttachment:(id)a0 didFinalizePosition:(struct CGPoint { double x0; double x1; })a1;
- (BOOL)drawableAttachment:(id)a0 withLayout:(id)a1 shouldPositionIterativelyInColumn:(id)a2;

@end
