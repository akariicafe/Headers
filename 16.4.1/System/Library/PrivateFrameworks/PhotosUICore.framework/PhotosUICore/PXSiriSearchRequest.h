@class NSArray;

@interface PXSiriSearchRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *queryTokens;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)_queryTokensForLocationCreated:(id)a0;
- (id)_queryTokensForActivities:(id)a0;
- (id)_queryTokensForAlbumName:(id)a0;
- (id)_queryTokensForDateCreated:(id)a0;
- (id)_queryTokensForEvents:(id)a0;
- (id)_queryTokensForGeographicalFeatures:(id)a0;
- (id)_queryTokensForPeopleInPhoto:(id)a0 peopleInPhotoOperator:(long long)a1;
- (id)_queryTokensForPhotoAttributeOptions:(unsigned long long)a0;
- (id)_queryTokensForPlaces:(id)a0;
- (id)_queryTokensForSearchTerms:(id)a0 searchTermsOperator:(long long)a1;
- (BOOL)_useNLDateSearch;
- (id)initWithSearchForPhotosIntent:(id)a0;
- (id)initWithStartPhotoPlaybackIntent:(id)a0;

@end
