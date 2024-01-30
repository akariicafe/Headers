@class MUPlaceTileCellConfiguration, NSString, UIImageView, UILayoutGuide, UIView;
@protocol MUPlaceTileViewModel, MULabelViewProtocol;

@interface MUPlaceCompactTileContentView : UIView <MUPlaceTileTemplateView> {
    UIImageView *_iconView;
    UIView<MULabelViewProtocol> *_primaryLabel;
    UIView<MULabelViewProtocol> *_secondaryLabel;
    UILayoutGuide *_contentLayoutGuide;
    MUPlaceTileCellConfiguration *_configuration;
}

@property (readonly, nonatomic) UIImageView *tileImageView;
@property (retain, nonatomic) id<MUPlaceTileViewModel> viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })_preferredSizeForViewModel:(id)a0 cellConfiguration:(id)a1 maximumMeasurements:(id)a2;
+ (struct CGSize { double x0; double x1; })preferredSizeForViewModels:(id)a0 cellConfiguration:(id)a1;

- (void)_setupConstraints;
- (void).cxx_destruct;
- (void)_updateAppearance;
- (void)traitCollectionDidChange:(id)a0;
- (void)_setupSubviews;
- (void)_updateFonts;
- (id)initWithCellConfiguration:(id)a0;

@end
