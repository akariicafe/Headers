@class NSString, NSDictionary, NSArray;

@interface STRegionRatings : NSObject

@property (class, readonly) STRegionRatings *sharedRatings;

@property (retain, nonatomic) NSDictionary *regionRatingsData;
@property (readonly, copy) NSString *preferredRegion;
@property (readonly, copy) NSDictionary *localizedRegionsByCode;
@property (readonly, copy) NSArray *localizedRegionAndCodePairs;

+ (void)loadRegionRatingsWithCompletionHandler:(id /* block */)a0;

- (void).cxx_destruct;
- (id)localizedMovieRatingsForRegion:(id)a0;
- (id)_localizedLabelForRegion:(id)a0 rating:(id)a1;
- (id)_localizedRatingsForRegion:(id)a0 type:(id)a1 allContentKey:(id)a2 noContentKey:(id)a3;
- (id)_overrideValueForString:(id)a0;
- (id)getClosestRestrictionMatch:(id)a0 within:(id)a1;
- (id)getRatingSystemTypeFrom:(id)a0;
- (void)loadRegionRatingsDataWithCompletionHandler:(id /* block */)a0;
- (id)localizedAppRatingsForRegion:(id)a0;
- (id)localizedStringForAppRatingLabel:(id)a0;
- (id)localizedTVRatingsForRegion:(id)a0;

@end
