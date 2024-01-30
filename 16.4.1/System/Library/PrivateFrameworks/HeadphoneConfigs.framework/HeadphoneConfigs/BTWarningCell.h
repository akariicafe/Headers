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

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (BOOL)becomeFirstResponder;
- (void)refreshCellContentsWithSpecifier:(id)a0;
- (BOOL)canBecomeFirstResponder;
- (void)layoutSubviews;
- (void)updateConstraints;
- (void).cxx_destruct;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;

@end
