@class UIColor, NSString, UILabel, NSAttributedString;

@interface UIPickerTableViewTitledCell : UIPickerTableViewCell {
    UIColor *_textColor;
}

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSAttributedString *attributedTitle;
@property (readonly, nonatomic) UILabel *_titleLabel;
@property (readonly, nonatomic) BOOL _isAttributed;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 textColor:(id)a2 forceTextAlignmentCentered:(BOOL)a3;
- (void).cxx_destruct;
- (void)_setIsCenterCell:(BOOL)a0 shouldModifyAlphaOfView:(BOOL)a1;
- (void)prepareForReuse;
- (BOOL)_canBeReusedInPickerView;

@end
