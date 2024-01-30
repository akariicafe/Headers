@class UIStackView, NSString, MRUVendorSpecificTableViewCell, MRUVisualStylingProvider, UILabel;

@interface MRUVendorSpecificSubtitleView : UIView <MRUVisualStylingProviderObserver>

@property (retain, nonatomic) UIStackView *contentView;
@property (retain, nonatomic) UILabel *protocolNameLabel;
@property (copy, nonatomic) NSString *protocolName;
@property (nonatomic) long long state;
@property (retain, nonatomic) MRUVisualStylingProvider *stylingProvider;
@property (nonatomic) long long cellType;
@property (weak, nonatomic) MRUVendorSpecificTableViewCell *containerCell;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateVisualStyling;
- (void)updateContentSizeCategory;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)visualStylingProviderDidChange:(id)a0;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)didMoveToSuperview;
- (void).cxx_destruct;

@end
