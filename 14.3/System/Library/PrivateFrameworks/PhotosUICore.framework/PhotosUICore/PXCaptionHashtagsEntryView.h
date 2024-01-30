@class UIFont, NSString, _PXUITextView, UIButton;
@protocol PXCaptionHashtagsEntryViewDelegate;

@interface PXCaptionHashtagsEntryView : UIView <UITextViewDelegate>

@property (retain, nonatomic) _PXUITextView *textView;
@property (retain, nonatomic) UIButton *moreButton;
@property (nonatomic) BOOL showAllText;
@property (retain, nonatomic) UIFont *font;
@property (nonatomic) double cachedEllipsisWidth;
@property (weak, nonatomic) id<PXCaptionHashtagsEntryViewDelegate> delegate;
@property (copy, nonatomic) NSString *originalText;
@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) BOOL isEditing;
@property (nonatomic) double maxHeightInEditMode;
@property (readonly, nonatomic) unsigned long long numberOfHashtagsInText;
@property (readonly, nonatomic) double minimumHeightInEdit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_updateFonts;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (void)contentSizeCategoryDidChangeNotification:(id)a0;
- (void).cxx_destruct;
- (double)preferredHeightForWidth:(double)a0;
- (id)uiTextView;
- (void)exitEditing;
- (void)resetToOriginalText;
- (void)moreButtonTapped:(id)a0;
- (double)_ellipsisWidth;
- (void)_addLinkAttributeToHashtagsInTextView;
- (long long)_currentMaxLines;
- (void)_removeLinkAttributeInTextView;
- (double)_preferredHeight:(BOOL *)a0;
- (double)_preferredHeight:(BOOL *)a0 forWidth:(double)a1;
- (BOOL)_shouldShowMoreButton;
- (BOOL)_needsUpdateSize:(BOOL *)a0;
- (void)_hideShowButton;
- (void)layoutSubviews;
- (void)textViewDidBeginEditing:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)textViewShouldEndEditing:(id)a0;
- (BOOL)textViewShouldBeginEditing:(id)a0;
- (void)textViewDidEndEditing:(id)a0;
- (void)textViewDidChange:(id)a0;
- (double)_maxHeight;

@end
