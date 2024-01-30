@class UIButton, NSString, UIFont;
@protocol HUTitleButtonDescriptionCellDelegate;

@interface HUTitleButtonDescriptionCell : HUTitleDescriptionCell

@property (retain, nonatomic) UIButton *valueButton;
@property (retain, nonatomic) NSString *buttonText;
@property (retain, nonatomic) UIFont *buttonFont;
@property (nonatomic) BOOL hideButton;
@property (nonatomic) BOOL buttonColorFollowsTintColor;
@property (weak, nonatomic) id<HUTitleButtonDescriptionCellDelegate> delegate;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (void)updateConstraints;
- (void).cxx_destruct;
- (void)_updateButtonHidden;
- (void)handleRemoveAction:(id)a0;
- (void)updateUIWithAnimation:(BOOL)a0;

@end
