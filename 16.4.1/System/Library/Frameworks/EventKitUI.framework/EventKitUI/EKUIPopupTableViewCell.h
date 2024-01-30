@class UIMenu, NSArray, UILabel, UIButton;

@interface EKUIPopupTableViewCell : EKUITableViewCell {
    UILabel *_textLabel;
    UIButton *_popupButton;
    NSArray *_constraints;
}

@property (copy, nonatomic) UIMenu *popupMenu;
@property (copy, nonatomic) id /* block */ popupMenuProvider;
@property (nonatomic) BOOL showSelectedImage;
@property (nonatomic) BOOL titleStrikethrough;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)textLabel;
- (void)_updateConstraints;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;

@end
