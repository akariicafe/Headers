@class UIFont;

@interface AppStoreKit.DynamicTypeTextField : UITextField {
    void /* unknown type, empty encoding */ fontUseCase;
    void /* unknown type, empty encoding */ directionalTextAlignment;
}

@property (nonatomic, retain) UIFont *font;
@property (nonatomic) long long textAlignment;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithCoder:(id)a0;

@end
