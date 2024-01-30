@class NSString, UIImageView, MUImageView, UIView;
@protocol MUPlaceTileViewModel, MULabelViewProtocol;

@interface MUPlaceTileListContentView : MUPlaceSectionRowView <MUPlaceTileTemplateView> {
    UIView<MULabelViewProtocol> *_titleLabel;
    UIView<MULabelViewProtocol> *_secondaryLabel;
    UIView<MULabelViewProtocol> *_tertiaryLabel;
    MUImageView *_stopImageView;
}

@property (readonly, nonatomic) UIImageView *tileImageView;
@property (retain, nonatomic) id<MUPlaceTileViewModel> viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_updateFonts;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setupConstraints;
- (void)traitCollectionDidChange:(id)a0;
- (void)_setupViews;
- (void).cxx_destruct;
- (void)_updateAppearance;

@end
