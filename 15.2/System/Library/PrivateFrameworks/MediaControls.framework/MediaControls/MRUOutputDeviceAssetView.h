@class BSUIEmojiLabelView, NSString, UIImageView, MRUVisualStylingProvider, CCUICAPackageView, MRUOutputDeviceAsset;

@interface MRUOutputDeviceAssetView : UIView <MRUVisualStylingProviderObserver>

@property (retain, nonatomic) BSUIEmojiLabelView *titleLabel;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) CCUICAPackageView *packageView;
@property (retain, nonatomic) MRUOutputDeviceAsset *asset;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *glyphState;
@property (retain, nonatomic) MRUVisualStylingProvider *stylingProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSubviews;
- (void)updateVisualStyling;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)updateVisibility;
- (void).cxx_destruct;
- (void)updateContentSizeCategory;
- (void)visualStylingProviderDidChange:(id)a0;

@end
