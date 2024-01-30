@class NSString, UITextView, NSArray;

@interface BTWarningCell : PSTableCell <UITextViewDelegate> {
    UITextView *_titleTextView;
    UITextView *_bodyTextView;
    NSArray *_constraints;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)cellStyle;

- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)refreshCellContentsWithSpecifier:(id)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)updateConstraints;
- (BOOL)canBecomeFirstResponder;
- (BOOL)becomeFirstResponder;

@end
