@class UIColor, NSString, NSArray, MKMapItemIdentifier, MKMapItem, MULabeledTokenViewModel;

@interface MUPlaceHeaderViewModel : NSObject <MUPlaceHeaderViewModel> {
    MKMapItem *_mapItem;
    MKMapItem *_enclosingMapItem;
    NSString *_labelString;
    NSString *_enclosingPlaceString;
}

@property (readonly, nonatomic) MKMapItemIdentifier *enclosingMapItemIdentifier;
@property (readonly, nonatomic) BOOL hasHeroImage;
@property (readonly, nonatomic, getter=isVerified) BOOL verified;
@property (readonly, nonatomic, getter=isClaimed) BOOL claimed;
@property (readonly, nonatomic) BOOL hasInitialData;
@property (readonly, nonatomic) NSString *placeName;
@property (readonly, nonatomic) NSString *placeSecondaryName;
@property (readonly, nonatomic) BOOL hasEnclosingPlace;
@property (readonly, nonatomic) MULabeledTokenViewModel *enclosingPlaceViewModel;
@property (readonly, nonatomic) NSArray *transitLabelItems;
@property (readonly, nonatomic) BOOL supportsEnhancedBusinessHeader;
@property (readonly, nonatomic) BOOL supportsLogo;
@property (readonly, nonatomic) UIColor *coverPhotoBackgroundColor;
@property (readonly, nonatomic) UIColor *logoBackgroundColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithMapItem:(id)a0;
- (void).cxx_destruct;
- (void)_buildEnclosingPlace;
- (id)enclosingPlaceAttributedStringWithFont:(id)a0 labelColor:(id)a1 tokenColor:(id)a2;
- (void)loadCoverPhotoWithSize:(struct CGSize { double x0; double x1; })a0 completion:(id /* block */)a1;
- (void)loadHeroImageWithSize:(struct CGSize { double x0; double x1; })a0 completion:(id /* block */)a1;
- (void)loadVerifiedLogoImageWithSize:(struct CGSize { double x0; double x1; })a0 completion:(id /* block */)a1;
- (void)refineEnclosingMapItemWithCompletion:(id /* block */)a0;

@end
