@class NSSet, CLLocation, PHAsset;

@interface PGKeyAssetCurationOptions : NSObject <NSCopying>

@property (retain, nonatomic) CLLocation *referenceLocation;
@property (retain, nonatomic) NSSet *referencePersonUUIDs;
@property (nonatomic) unsigned long long precision;
@property (nonatomic) BOOL complete;
@property (nonatomic) BOOL focusOnPeople;
@property (nonatomic) BOOL allowContextualTrip;
@property (nonatomic) BOOL useSummarizer;
@property (nonatomic) BOOL prefilterAssetsWithFaces;
@property (nonatomic) double prefilterAssetsWithFacesThreshold;
@property (nonatomic) BOOL useContextualCurationOnly;
@property (nonatomic) BOOL promoteAutoplayableItems;
@property (readonly, nonatomic) PHAsset *referenceAsset;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithReferenceAsset:(id)a0;

@end
