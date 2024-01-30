@class UITextView, NSString, NSLayoutConstraint, UITapGestureRecognizer;
@protocol SFAccountNoteTableViewCellDelegate;

@interface SFAccountNoteTableViewCell : UITableViewCell <UITextViewDelegate> {
    NSLayoutConstraint *_heightConstraint;
    UITapGestureRecognizer *_textViewTapGestureRecognizer;
}

@property (retain, nonatomic) UITextView *textView;
@property (copy, nonatomic) id /* block */ textDidChange;
@property (weak, nonatomic) id<SFAccountNoteTableViewCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (BOOL)textView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;
- (void)textViewDidChange:(id)a0;
- (void)_didTapTextView;
- (void)_updateHeightConstraint;

@end
