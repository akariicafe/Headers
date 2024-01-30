@class NSString, NSArray, WFPhotoAccessResource;

@interface WFPhotoAlbumPickerParameter : WFEnumerationParameter <PHPhotoLibraryChangeObserver> {
    NSArray *_possibleStates;
    id _defaultSerializedRepresentation;
}

@property (retain, nonatomic) WFPhotoAccessResource *photoAccessResource;
@property (readonly, nonatomic) BOOL includesSmartAlbum;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)referencedActionResourceClasses;
+ (BOOL)hasPhotosAccess;

- (void)photoLibraryDidChange:(id)a0;
- (id)possibleStates;
- (void).cxx_destruct;
- (id)sharedLibrary;
- (id)initWithDefinition:(id)a0;
- (Class)singleStateClass;
- (id)localizedLabelForPossibleState:(id)a0;
- (void)possibleStatesDidChange;
- (void)wasAddedToWorkflow;
- (void)wasRemovedFromWorkflow;
- (id)defaultSerializedRepresentation;
- (void)setActionResources:(id)a0;
- (void)resourceAvailabilityChanged;

@end
