@class ICInlineAttachment, NSString, ICInlineTextAttachment, NSTextContainer, NSTextStorage, NSLayoutManager;

@interface ICInlineAttachmentViewController : ICAbstractAttachmentViewController <ICAttachmentFindable, ICInlineAttachmentViewAnimationDelegate, ICAttachmentViewControllerInitializing>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL forManualRendering;
@property (weak, nonatomic) NSLayoutManager *layoutManager;
@property (nonatomic) unsigned long long initialCharIndex;
@property (readonly, nonatomic) NSTextContainer *displayTextTextContainer;
@property (readonly, nonatomic) NSLayoutManager *displayTextLayoutManager;
@property (readonly, nonatomic) NSTextStorage *displayTextTextStorage;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } selectedSearchRange;
@property (readonly, weak, nonatomic) ICInlineAttachment *attachment;
@property (weak, nonatomic) ICInlineTextAttachment *textAttachment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)loadView;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })attachmentRange;
- (void)scrollToRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inFindableString:(id)a1;
- (id)rectsForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inFindableString:(id)a1;
- (void)drawCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inFindableString:(id)a1 forContentView:(id)a2;
- (void)redrawInlineAttachmentView:(id)a0;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withString:(id)a1 inFindableString:(id)a2;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })selectedRangeWithinRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inFindableString:(id)a1;
- (void)setHighlightPatternRegex:(id)a0;
- (void)setSelectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inFindableString:(id)a1;
- (id)viewForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inFindableString:(id)a1;
- (id)initWithTextAttachment:(id)a0 forManualRendering:(BOOL)a1 layoutManager:(id)a2;
- (id)initWithTextAttachment:(id)a0 forManualRendering:(BOOL)a1 layoutManager:(id)a2 initialCharacterIndex:(unsigned long long)a3;
- (id)inlineAttachmentView;
- (void)layoutWithStyleAttributesOfCharacterIndex:(unsigned long long)a0;
- (void)relayoutInlineAttachmentView:(id)a0;
- (void)updateDisplayTextTextStorage;

@end
