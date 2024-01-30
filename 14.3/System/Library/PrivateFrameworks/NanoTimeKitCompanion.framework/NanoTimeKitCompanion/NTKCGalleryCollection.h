@class NSString;
@protocol NTKCGalleryCollectionDelegate;

@interface NTKCGalleryCollection : NSObject <NTKEnumeratableFaceCollection>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *descriptionText;
@property (copy, nonatomic) id /* block */ calloutName;
@property (weak, nonatomic) id<NTKCGalleryCollectionDelegate> delegate;
@property (readonly, nonatomic) BOOL canAddNewFaces;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_explorerFacesForDevice:(id)a0;
+ (id)_modularFacesForDevice:(id)a0;
+ (id)_utilityFacesForDevice:(id)a0;
+ (id)_activityFacesForDevice:(id)a0;
+ (id)_simpleFacesForDevice:(id)a0;
+ (id)_motionFacesForDevice:(id)a0;
+ (id)_colorFacesForDevice:(id)a0;
+ (id)_chronographFacesForDevice:(id)a0;
+ (id)_numeralsFacesForDevice:(id)a0;
+ (id)_astronomyFacesForDevice:(id)a0;
+ (id)_timelapseFacesForDevice:(id)a0;
+ (id)_solarFacesForDevice:(id)a0;
+ (id)_extraLargeFacesForDevice:(id)a0;
+ (id)_upNextFacesForDevice:(id)a0;
+ (id)_kaleidoscopeFacesForDevice:(id)a0;
+ (id)_whistlerAnalogFacesForDevice:(id)a0;
+ (id)_whistlerDigitalFacesForDevice:(id)a0;
+ (id)_breatheFacesForDevice:(id)a0;
+ (id)_smokeFacesForDevice:(id)a0;
+ (id)_metallicFacesForDevice:(id)a0;
+ (id)_fireWaterFacesForDevice:(id)a0;
+ (id)_spectrumAnalogFacesForDevice:(id)a0;
+ (id)_whistlerSubdialsFacesForDevice:(id)a0;
+ (id)_californiaFacesForDevice:(id)a0;
+ (id)_blackcombFacesForDevice:(id)a0;
+ (id)_bigNumeralsAnalogFacesForDevice:(id)a0;
+ (id)_bigNumeralsDigitalFacesForDevice:(id)a0;
+ (id)_photoFacesForDevice:(id)a0;
+ (id)_mickeyAndMinnieFacesForDevice:(id)a0;
+ (id)_infinityFacesForDevice:(id)a0;
+ (id)_prideFacesForDevice:(id)a0;
+ (id)_victoryDigitalFacesForDevice:(id)a0;
+ (id)_victoryAnalogFacesForDevice:(id)a0;
+ (id)_olympusFacesForDevice:(id)a0;
+ (id)_zeusFacesForDevice:(id)a0;
+ (id)_spectrumZeusFacesForDevice:(id)a0;
+ (id)_newFacesExcludingRestrictedForDevice:(id)a0;
+ (id)_newFacesForDevice:(id)a0;
+ (id)galleryCollectionsForDevice:(id)a0;
+ (id)_galleryCollectionForDevice:(id)a0 withCollectionIdentifier:(id)a1 title:(id)a2 calloutName:(id /* block */)a3;

- (unsigned long long)numberOfFaces;
- (void).cxx_destruct;
- (id)faceAtIndex:(unsigned long long)a0;
- (id)newFace;
- (void)enumerateFaceNamesUsingBlock:(id /* block */)a0;
- (unsigned long long)indexOfFace:(id)a0;

@end
