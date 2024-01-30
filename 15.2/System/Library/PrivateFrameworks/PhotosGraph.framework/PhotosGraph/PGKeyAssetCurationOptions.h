@class NSSet, CLLocation, PHAsset, PGCurationCriteria;

@interface PGKeyAssetCurationOptions : NSObject <NSCopying>

@property (retain, nonatomic) CLLocation *referenceLocation;
@property (retain, nonatomic) NSSet *referencePersonLocalIdentifiers;
@property (nonatomic) unsigned long long minimumNumberOfReferencePersons;
@property (nonatomic) unsigned long long precision;
@property (nonatomic) BOOL complete;
@property (nonatomic) BOOL focusOnPeople;
@property (nonatomic) BOOL allowContextualTrip;
@property (nonatomic) BOOL useSummarizer;
@property (nonatomic) BOOL prefilterAssetsWithFaces;
@property (nonatomic) double prefilterAssetsWithFacesThreshold;
@property (nonatomic) BOOL useContextualCurationOnly;
@property (nonatomic) BOOL promoteAutoplayableItems;
@property (nonatomic) BOOL isForMemories;
@property (nonatomic) BOOL allowGuestAsset;
@property (nonatomic) BOOL wantsGoodSquareCropScore;
@property (readonly, nonatomic) PHAsset *referenceAsset;
@property (retain, nonatomic) PGCurationCriteria *curationCriteria;

- (id)initWithDictionaryRepresentation:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)initWithReferenceAsset:(id)a0;

@end
