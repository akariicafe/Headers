@class MPSectionedCollection, NSString, MPModelResponse;

@interface MPStoreLibraryPersonalizationResponse : MPModelResponse <MPModelResponseDetailedKeepLocalStatusRequesting>

@property (retain, nonatomic) MPSectionedCollection *representedObjectResults;
@property (retain, nonatomic) MPModelResponse *libraryResponse;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
