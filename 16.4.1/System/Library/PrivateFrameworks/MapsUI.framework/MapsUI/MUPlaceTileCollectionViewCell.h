@class MUPlaceTileCellConfiguration, NSString, UIImageView, UIView;
@protocol MUPlaceTileViewModel, MUPlaceTileTemplateView;

@interface MUPlaceTileCollectionViewCell : UICollectionViewCell <MUPlaceTileTemplateView> {
    UIView<MUPlaceTileTemplateView> *_tileContentView;
}

@property (retain, nonatomic) MUPlaceTileCellConfiguration *cellConfiguration;
@property (readonly, nonatomic) UIImageView *tileImageView;
@property (retain, nonatomic) id<MUPlaceTileViewModel> viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)reuseIdentifier;
+ (struct CGSize { double x0; double x1; })preferredSizeForViewModels:(id)a0 cellConfiguration:(id)a1 usingMeasurements:(id)a2;

- (void).cxx_destruct;
- (void)_updateTemplateViewWithOldCellConfiguration:(id)a0;

@end
