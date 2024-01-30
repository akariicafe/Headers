@class NSString, NSDictionary, NSArray;

@interface STRegionRatings : NSObject

@property (class, readonly) STRegionRatings *sharedRatings;

@property (readonly) NSDictionary *ratingsPlist;
@property (readonly, copy) NSString *preferredRegion;
@property (readonly, copy) NSDictionary *localizedRegionsByCode;
@property (readonly, copy) NSArray *localizedRegionAndCodePairs;

- (id)init;
- (void).cxx_destruct;
- (id)localizedMovieRatingsForRegion:(id)a0;
- (id)localizedTVRatingsForRegion:(id)a0;
- (id)localizedAppRatingsForRegion:(id)a0;
- (id)localizedStringForAppRatingLabel:(id)a0;
- (id)_overrideValueForString:(id)a0;
- (id)_localizedLabelForRegion:(id)a0 rating:(id)a1;
- (id)_localizedRatingsForRegion:(id)a0 type:(id)a1 allContentKey:(id)a2 noContentKey:(id)a3;

@end
