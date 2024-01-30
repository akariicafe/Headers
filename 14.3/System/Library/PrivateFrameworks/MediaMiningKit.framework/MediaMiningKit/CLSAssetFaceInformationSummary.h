@class NSDictionary;

@interface CLSAssetFaceInformationSummary : NSObject

@property (readonly) unsigned short numberOfFaces;
@property (readonly) unsigned short numberOfFacesOfVerifiedPersons;
@property (readonly) unsigned short numberOfFacesOfHiddenPersons;
@property (readonly) unsigned short numberOfGoodFaces;
@property (readonly) unsigned short numberOfGoodFacesOfVerifiedPersons;
@property (readonly) double averageFaceQuality;
@property (readonly) double averageFaceQualityOfVerifiedPersons;
@property (readonly) NSDictionary *faceInformationByPersonLocalIdentifier;

- (void).cxx_destruct;
- (id)initWithNumberOfFaces:(unsigned long long)a0 numberOfFacesOfVerifiedPersons:(unsigned long long)a1 numberOfFacesOfHiddenPersons:(unsigned long long)a2 numberOfGoodFaces:(unsigned long long)a3 numberOfGoodFacesOfVerifiedPersons:(unsigned long long)a4 averageFaceQuality:(double)a5 averageFaceQualityOfVerifiedPersons:(double)a6 faceInformationByPersonLocalIdentifier:(id)a7;

@end
