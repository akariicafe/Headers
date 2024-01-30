@class CNAccountsAndGroupsCellTextView, CNAccountsAndGroupsItem, NSString;
@protocol CNAccountsAndGroupsCellDelegate;

@interface CNAccountsAndGroupsCell : UICollectionViewListCell <UITextViewDelegate>

@property (retain, nonatomic) CNAccountsAndGroupsCellTextView *titleTextView;
@property (nonatomic) double titleTextViewHeight;
@property (retain, nonatomic) CNAccountsAndGroupsItem *item;
@property (weak, nonatomic) id<CNAccountsAndGroupsCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)prepareForDisplay;
- (void)prepareForReuse;
- (void).cxx_destruct;
- (id)preferredLayoutAttributesFittingAttributes:(id)a0;
- (BOOL)textView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;
- (void)textViewDidBeginEditing:(id)a0;
- (void)textViewDidChange:(id)a0;
- (void)textViewDidEndEditing:(id)a0;
- (BOOL)textViewShouldBeginEditing:(id)a0;
- (void)applyTextColor:(id)a0;
- (void)applyAccessoryTintColor:(id)a0;
- (void)applyTextViewPlaceholderIfNeeded;
- (void)applyTextViewTintColor:(id)a0;
- (void)beginEditingName;
- (void)endEditingName;
- (BOOL)isCellEditing;
- (BOOL)isValidTitle:(id)a0;
- (double)requiredHeightForTextView:(id)a0 fittingWidth:(double)a1;
- (void)resetTextFieldEnabled;
- (void)setTextViewEnabled:(BOOL)a0;
- (void)setupTextViewConstraints;

@end
