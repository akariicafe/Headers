@class NSString, _PXEditableNavigationTitleTextField;
@protocol PXEditableNavigationTitleViewDelegate;

@interface PXEditableNavigationTitleView : UIView <UITextFieldDelegate> {
    struct { BOOL textColor; } _needsUpdateFlags;
    BOOL _isPerformingUpdates;
    struct { BOOL validateNewText; BOOL didEndEditing; } _delegateRespondsTo;
}

@property (readonly, nonatomic) _PXEditableNavigationTitleTextField *textField;
@property (nonatomic, getter=isEditing) BOOL editing;
@property (weak, nonatomic) id<PXEditableNavigationTitleViewDelegate> delegate;
@property (copy, nonatomic) NSString *text;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tintColorDidChange;
- (void).cxx_destruct;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)_setNeedsUpdate;
- (void)textFieldDidBeginEditing:(id)a0;
- (void)dealloc;
- (BOOL)_needsUpdate;
- (void)_updateIfNeeded;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (void)endEditing;
- (void)textFieldDidEndEditing:(id)a0 reason:(long long)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_invalidateTextColor;
- (void)_updateTextColorIfNeeded;
- (void)_textFieldTextDidChange:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
