@class NSString, UIImageView, UILayoutGuide, UIView, MUImageView;
@protocol MUPlaceTileViewModel, MULabelViewProtocol;

@interface MUPlaceTileListContentView : MUPlaceSectionRowView <MUPlaceTileTemplateView> {
    UIView<MULabelViewProtocol> *_titleLabel;
    UIView<MULabelViewProtocol> *_secondaryLabel;
    UIView<MULabelViewProtocol> *_tertiaryLabel;
    UILayoutGuide *_stackLayoutGuide;
    MUImageView *_stopImageView;
}

@property (readonly, nonatomic) UIImageView *tileImageView;
@property (retain, nonatomic) id<MUPlaceTileViewModel> viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setupConstraints;
- (void).cxx_destruct;
- (void)_updateAppearance;
- (void)traitCollectionDidChange:(id)a0;
- (void)_setupViews;
- (void)_updateFonts;

@end
