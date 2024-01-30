@class NSSet;

@interface PGCurationOptions : NSObject <NSCopying>

@property (nonatomic) unsigned long long duration;
@property (nonatomic) unsigned long long precision;
@property (nonatomic) BOOL includesAllFaces;
@property (nonatomic) BOOL focusOnPeople;
@property (nonatomic) BOOL focusOnInterestingItems;
@property (nonatomic, getter=semanticalDedupingIsEnabled) BOOL semanticalDedupingEnabled;
@property (nonatomic) BOOL semanticalDedupingUsesAdaptiveSimilarStacking;
@property (nonatomic, getter=movieDedupingIsEnabled) BOOL movieDedupingEnabled;
@property (nonatomic, getter=lastPassMovieAdditionIsEnabled) BOOL lastPassMovieAdditionEnabled;
@property (nonatomic) long long cardinalMode;
@property (copy, nonatomic) NSSet *uuidsOfRequiredAssets;

+ (id)defaultOptions;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDuration:(unsigned long long)a0 precision:(unsigned long long)a1;

@end
