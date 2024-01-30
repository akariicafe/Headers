@class UIImageView, UILabel, UIView;

@interface NTKGreenfieldB640CollectionViewCell : UICollectionViewCell {
    UIView *_faceView;
    UIImageView *_snapshotFaceViewForErrorState;
    UIImageView *_watchBandImageView;
    UILabel *_faceNameLabel;
    UIImageView *_selectedCheckImageView;
    BOOL _shouldPresentCheckmark;
}

+ (id)reuseIdentifier;
+ (struct CGSize { double x0; double x1; })cellSizeForWatchBandImage:(id)a0 watchFaceName:(id)a1;

- (void)prepareForReuse;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)_populateWithDecodedRecipe:(id)a0 bandImage:(id)a1 shouldPresentFaceName:(BOOL)a2 shouldPresentCheckmark:(BOOL)a3 isSelected:(BOOL)a4;
- (void)prepareCellWithDecodedRecipe:(id)a0 bandImage:(id)a1 shouldPresentFaceName:(BOOL)a2 shouldPresentCheckmark:(BOOL)a3 isSelected:(BOOL)a4;
- (void)updateSeletedState:(BOOL)a0;

@end
