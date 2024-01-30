@class NSString;

@interface FocusSettingsUI.FocusFilterConfigurationMastheadView : UIView {
    void /* unknown type, empty encoding */ bundleIdentifier;
    void /* unknown type, empty encoding */ title;
    void /* unknown type, empty encoding */ subtitle;
    void /* unknown type, empty encoding */ rootView;
}

@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *subtitle;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithBundleIdentifier:(id)a0 title:(id)a1 subtitle:(id)a2;

@end
