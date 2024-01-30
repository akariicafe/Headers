@class NSString, NTKFace;
@protocol NTKGalleryCollectionDelegate;

@interface NTKGalleryCollection : NSObject <NTKEnumeratableFaceCollection>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *descriptionText;
@property (weak, nonatomic) id<NTKGalleryCollectionDelegate> delegate;
@property (copy, nonatomic) id /* block */ calloutName;
@property (readonly, nonatomic) BOOL canAddNewFaces;
@property (readonly, nonatomic) NTKFace *newFace;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_astronomyFacesForDevice:(id)a0;
+ (id)_upNextFacesForDevice:(id)a0;
+ (id)_kaleidoscopeFacesForDevice:(id)a0;
+ (id)_whistlerSubdialsFacesForDevice:(id)a0;
+ (id)_blackcombFacesForDevice:(id)a0;
+ (id)_photoFacesForDevice:(id)a0;
+ (id)_newFacesExcludingRestrictedForDevice:(id)a0;
+ (id)_newFacesForDevice:(id)a0;
+ (id)galleryCollectionsForDevice:(id)a0;

- (id)faceAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (unsigned long long)numberOfFaces;
- (void)enumerateFaceNamesUsingBlock:(id /* block */)a0;
- (unsigned long long)indexOfFace:(id)a0;

@end
