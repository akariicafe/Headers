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

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)updateConstraints;
- (id)initWithCoder:(id)a0;
- (void)_commonPXMemoriesLabelInitialization;
- (void)_configureLabel;
- (id)_configuredText;

@end
