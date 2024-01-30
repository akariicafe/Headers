@class NSString, NSArray;

@interface NewsUI2.SportsTagView : UIView {
    void /* unknown type, empty encoding */ iconImageView;
    void /* unknown type, empty encoding */ nameLabel;
    void /* unknown type, empty encoding */ secondaryNameLabel;
    void /* unknown type, empty encoding */ accessoryButton;
    void /* unknown type, empty encoding */ token;
}

@property (nonatomic, copy) NSString *accessibilityLabel;
@property (nonatomic, copy) NSString *accessibilityValue;
@property (nonatomic, copy) NSString *accessibilityHint;
@property (nonatomic, copy) NSArray *accessibilityCustomActions;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
