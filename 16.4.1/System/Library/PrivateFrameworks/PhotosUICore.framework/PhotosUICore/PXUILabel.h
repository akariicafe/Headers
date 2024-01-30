@class NSString, UIVisualEffectView, PXLabelSpec, UILabel, NSArray;

@interface PXUILabel : UIView {
    UILabel *_label;
    UIVisualEffectView *_visualEffectView;
    NSArray *_labelLayoutConstraints;
    long long _verticalAlignment;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _contentInsets;
}

@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) PXLabelSpec *spec;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateConstraints;
- (void).cxx_destruct;
- (id)_configuredText;
- (void)_configureLabel;
- (void)_commonPXMemoriesLabelInitialization;

@end
