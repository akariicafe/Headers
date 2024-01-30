@class NSString;

@interface FocusSettingsUI.FocusFilterSystemConfigurationMastheadView : UIView {
    void /* unknown type, empty encoding */ title;
    void /* unknown type, empty encoding */ symbolName;
    void /* unknown type, empty encoding */ subtitle;
    void /* unknown type, empty encoding */ rootView;
}

@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *symbolName;
@property (nonatomic, readonly) NSString *subtitle;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ color;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 symbolName:(id)a2 color:(id)a3;

@end
