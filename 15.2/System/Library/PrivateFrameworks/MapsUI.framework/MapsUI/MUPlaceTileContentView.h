@class MUPlaceTileCellConfiguration, NSString, UIImageView, MUImageView, UIView, NSLayoutConstraint;
@protocol MUPlaceTileViewModel, MULabelViewProtocol;

@interface MUPlaceTileContentView : UIView <MUPlaceTileTemplateView> {
    UIView<MULabelViewProtocol> *_titleLabel;
    UIView<MULabelViewProtocol> *_subtitleLabel;
    UIView<MULabelViewProtocol> *_footerLabel;
    MUImageView *_contentImageView;
    UIImageView *_badgeImageView;
    NSLayoutConstraint *_titleToSubtitleConstraint;
    NSLayoutConstraint *_subtitleToFooterConstraint;
    MUPlaceTileCellConfiguration *_configuration;
}

@property (readonly, nonatomic) UIImageView *tileImageView;
@property (retain, nonatomic) id<MUPlaceTileViewModel> viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)preferredWidth;
+ (struct CGSize { double x0; double x1; })_preferredSizeForViewModel:(id)a0 cellConfiguration:(id)a1 maximumMeasurements:(id)a2;
+ (struct CGSize { double x0; double x1; })preferredSizeForViewModels:(id)a0 cellConfiguration:(id)a1;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)_setupConstraints;
- (void).cxx_destruct;
- (void)_updateAppearance;
- (void)traitCollectionDidChange:(id)a0;
- (void)_setupSubviews;
- (void)_updateFonts;
- (id)initWithCellConfiguration:(id)a0;

@end
