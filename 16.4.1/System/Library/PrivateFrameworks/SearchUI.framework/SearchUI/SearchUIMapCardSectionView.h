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

+ (id)_postalAddressFromPlacemark:(id)a0;
+ (BOOL)fillsBackgroundWithContentForCardSection:(id)a0;
+ (BOOL)supportsRecyclingForCardSection:(id)a0;

- (void)updateWithRowModel:(id)a0;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })containerView:(id)a0 layoutFrameForArrangedSubview:(id)a1 withProposedFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void).cxx_destruct;
- (id)setupContentView;
- (void)_updateSnapshot;
- (id)_clLocationFromSFLatLng:(id)a0;
- (void)_mapButtonPressed;
- (void)_updateSnapshotWithSize:(struct CGSize { double x0; double x1; })a0;
- (double)requestedMapHeight;
- (void)sendMapFeedbackWithTriggerEvent:(unsigned long long)a0 placemarkData:(id)a1;

@end
