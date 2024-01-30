@class MKPlacePhotoGalleryAttributionViewModel, NSArray, UIVisualEffectView, NSString, UILabel, UIView, UIButton;
@protocol MUPlacePhotoGalleryAttributionViewDelegate;

@interface MKPlacePhotoGalleryAttributionView : UIView <MKActivityObserving>

@property (retain, nonatomic) UIVisualEffectView *effectView;
@property (retain, nonatomic) UILabel *primaryLabel;
@property (retain, nonatomic) UILabel *secondaryLabel;
@property (retain, nonatomic) UIButton *accessoryButton;
@property (retain, nonatomic) NSArray *regularConstraints;
@property (retain, nonatomic) NSArray *primaryLabelOnlyConstraints;
@property (readonly, nonatomic) UIView *accessoryView;
@property (weak, nonatomic) id<MUPlacePhotoGalleryAttributionViewDelegate> delegate;
@property (retain, nonatomic) MKPlacePhotoGalleryAttributionViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)contentSizeCategoryDidChange:(id)a0;
- (void)updateStyle:(long long)a0;
- (void)updateFonts;
- (void).cxx_destruct;
- (void)setupSubviews;
- (void)_updateAppearance;
- (id)init;
- (void)beginAnimatingActivityIndicator;
- (void)endAnimatingActivityIndicatorWithError:(id)a0;
- (long long)blurEffectWithStyle:(long long)a0;
- (void)_accessoryViewTapped;
- (void)setDescription:(id)a0 license:(id)a1;
- (void)setAttributionLogoImage:(id)a0;

@end
