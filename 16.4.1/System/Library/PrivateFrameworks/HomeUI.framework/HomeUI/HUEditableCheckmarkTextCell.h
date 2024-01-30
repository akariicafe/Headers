@class UIView, NSArray, HFItem, NSString, HUCheckmarkAccessoryView, UITextField, UITapGestureRecognizer;
@protocol HUEditableCheckmarkDelegate, HUResizableCellDelegate;

@interface HUEditableCheckmarkTextCell : UITableViewCell <HUCellProtocol, HUDisableableCellProtocol, HUEditableTextCellProtocol> {
    UIView *_accessoryView;
}

@property (retain, nonatomic) HUCheckmarkAccessoryView *checkmarkView;
@property (retain, nonatomic) NSArray *staticConstraints;
@property (retain, nonatomic) NSArray *dynamicConstraints;
@property (retain, nonatomic) UITapGestureRecognizer *checkmarkTapRecognizer;
@property (nonatomic) BOOL disableCheckmark;
@property (nonatomic) BOOL removeCheckmark;
@property (nonatomic, setter=setChecked:) BOOL isChecked;
@property (nonatomic) BOOL allowCheckmarkSelectionWhileDisabled;
@property (weak, nonatomic) id<HUEditableCheckmarkDelegate> delegate;
@property (retain, nonatomic) HFItem *item;
@property (weak, nonatomic) id<HUResizableCellDelegate> resizingDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, getter=isDisabled) BOOL disabled;
@property (readonly, nonatomic) UITextField *textField;

+ (BOOL)requiresConstraintBasedLayout;

- (id)accessoryView;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void)prepareForReuse;
- (void)setAccessoryView:(id)a0;
- (void)layoutSubviews;
- (void)updateConstraints;
- (void).cxx_destruct;
- (void)_checkmarkTapped:(id)a0;
- (void)updateUIWithAnimation:(BOOL)a0;

@end
