@class NSDictionary;

@interface CLSAssetFaceInformationSummary : NSObject

@property (readonly) unsigned short numberOfFaces;
@property (readonly) unsigned short numberOfFacesIncludingPets;
@property (readonly) unsigned short numberOfFacesOfVerifiedPersons;
@property (readonly) unsigned short numberOfFacesOfHiddenPersons;
@property (readonly) unsigned short numberOfGoodFaces;
@property (readonly) unsigned short numberOfGoodFacesIncludingPets;
@property (readonly) unsigned short numberOfGoodFacesOfVerifiedPersons;
@property (readonly) double averageFaceQuality;
@property (readonly) double averageFaceQualityIncludingPets;
@property (readonly) double averageFaceQualityOfVerifiedPersons;
@property (readonly) NSDictionary *faceInformationByPersonLocalIdentifier;
@property (readonly) NSDictionary *faceInformationByConsolidatedPersonLocalIdentifier;

+ (id)_faceInformationByPersonLocalIdentifierFromDictionaryRepresentation:(id)a0;

- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)a0;
- (void).cxx_destruct;
- (id)_dictionaryRepresentationForFaceInformationByPersonLocalIdentifier:(id)a0;
- (id)initWithNumberOfFaces:(unsigned long long)a0 numberOfFacesIncludingPets:(unsigned long long)a1 numberOfFacesOfVerifiedPersons:(unsigned long long)a2 numberOfFacesOfHiddenPersons:(unsigned long long)a3 numberOfGoodFaces:(unsigned long long)a4 numberOfGoodFacesIncludingPets:(unsigned long long)a5 numberOfGoodFacesOfVerifiedPersons:(unsigned long long)a6 averageFaceQuality:(double)a7 averageFaceQualityIncludingPets:(double)a8 averageFaceQualityOfVerifiedPersons:(double)a9 faceInformationByPersonLocalIdentifier:(id)a10 faceInformationByConsolidatedPersonLocalIdentifier:(id)a11;

@end
