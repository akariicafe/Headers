@class UIFont, HUIconButton, UITextField, HFItem, UIView, NSLayoutConstraint, NSString;
@protocol HUResizableCellDelegate, HUNameAndIconEditorCellDelegate;

@interface HUNameAndIconEditorCell : UITableViewCell <HUCellProtocol, HUEditableTextCellProtocol, HUDisableableCellProtocol>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) HUIconButton *iconButton;
@property (retain, nonatomic) UITextField *textField;
@property (retain, nonatomic) NSLayoutConstraint *leftConstraint;
@property (retain, nonatomic) NSLayoutConstraint *rightConstraint;
@property (retain, nonatomic) NSLayoutConstraint *textFieldLeadingConstraint;
@property (weak, nonatomic) id<HUNameAndIconEditorCellDelegate> delegate;
@property (retain, nonatomic) UIFont *textFieldFont;
@property (nonatomic) BOOL fullWidth;
@property (nonatomic) BOOL hideIconButton;
@property (retain, nonatomic) HFItem *item;
@property (weak, nonatomic) id<HUResizableCellDelegate> resizingDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, getter=isDisabled) BOOL disabled;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)_setupConstraints;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (void)prepareForReuse;
- (void)updateUIWithAnimation:(BOOL)a0;
- (void)_handleIconButtonTap:(id)a0;
- (void)_updateFullWidthAppearance;
- (void)_updateTextFieldInset;
- (void)_updateDisabled;

@end
