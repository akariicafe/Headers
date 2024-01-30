@class NSString, NSArray, NSData, NSDictionary, _PARResult_Template;

@interface _PARResult : PBCodable <_PARResult, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *canonicalId;
@property (copy, nonatomic) NSString *dataServiceId;
@property (nonatomic) float score;
@property (copy, nonatomic) NSData *feedback;
@property (copy, nonatomic) NSString *url;
@property (nonatomic) int maxAgeSeconds;
@property (nonatomic) float serverScore;
@property (copy, nonatomic) NSArray *entities;
@property (nonatomic) int topHit;
@property (nonatomic) int engagementScore;
@property (nonatomic) int queryIndependentEngagementScore;
@property (nonatomic) int placement;
@property (nonatomic) BOOL renderHorizontallyWithOtherResultsInCategory;
@property (nonatomic) BOOL isQuickGlance;
@property (nonatomic) int minimumRankOfTopHitToSuppressResult;
@property (copy, nonatomic) NSString *appleReferrer;
@property (copy, nonatomic) NSString *sectionBundleId;
@property (copy, nonatomic) NSString *bundleId;
@property (copy, nonatomic) NSString *adamId;
@property (retain, nonatomic) _PARResult_Template *template;
@property (copy, nonatomic) NSString *intendedQuery;
@property (copy, nonatomic) NSString *correctedQuery;
@property (copy, nonatomic) NSString *completedQuery;
@property (nonatomic) BOOL shouldUseCompactDisplay;
@property (nonatomic) BOOL noGoTakeover;
@property (nonatomic) BOOL preferTopPlatter;
@property (nonatomic) BOOL usesCompactDisplay;
@property (copy, nonatomic) NSArray *alternativeURLs;
@property (copy, nonatomic) NSDictionary *serverFeatures;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)initWithJSON:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;
- (void)clearEntities;
- (void)addEntities:(id)a0;
- (id)entitiesAtIndex:(unsigned long long)a0;
- (unsigned long long)entitiesCount;
- (void)setServerFeatures:(double)a0 forKey:(id)a1;
- (BOOL)getServerFeatures:(double *)a0 forKey:(id)a1;
- (void)addAlternativeURLs:(id)a0;
- (void)clearAlternativeURLs;
- (unsigned long long)alternativeURLsCount;
- (id)alternativeURLsAtIndex:(unsigned long long)a0;

@end
