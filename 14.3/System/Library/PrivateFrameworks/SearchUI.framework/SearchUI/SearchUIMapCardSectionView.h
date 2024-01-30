@class TLKStackView, NSString, UITapGestureRecognizer, MKMapSnapshotter, CLPlacemark, MKPinAnnotationView, TLKImageView, TLKLabel, SFMapCardSection;

@interface SearchUIMapCardSectionView : SearchUICardSectionView <NUIContainerViewDelegate>

@property (readonly, nonatomic) SFMapCardSection *section;
@property (retain, nonatomic) TLKLabel *footnoteDescriptorLabel;
@property (retain, nonatomic) TLKLabel *footnoteLabel;
@property (retain, nonatomic) MKPinAnnotationView *pinAnnotationView;
@property (retain, nonatomic) UITapGestureRecognizer *tapRecognizer;
@property (retain, nonatomic) CLPlacemark *currentPlacemark;
@property (retain, nonatomic) TLKStackView *labelsStackView;
@property (retain, nonatomic) TLKImageView *snapshotView;
@property (retain, nonatomic) MKMapSnapshotter *mapSnapshotter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsRecyclingForCardSection:(id)a0;
+ (BOOL)fillsBackgroundWithContentForCardSection:(id)a0;
+ (id)_postalAddressFromPlacemark:(id)a0;

- (void)updateWithRowModel:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_mapButtonPressed;
- (void)updateMapAppearance;
- (id)_clLocationFromSFLatLng:(id)a0;
- (void)sendMapFeedbackWithTriggerEvent:(unsigned long long)a0 placemarkData:(id)a1;
- (id)_uiColorFromSFColor:(id)a0;
- (id)setupContentView;
- (struct CGSize { double x0; double x1; })containerView:(id)a0 systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a1 forArrangedSubview:(id)a2;
- (void)_updateSnapshot:(struct CGSize { double x0; double x1; })a0;

@end
