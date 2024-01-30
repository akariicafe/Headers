@class NSString;

@interface IKJSRestrictions : IKJSObject <NSObject, IKJSRestrictions, _IKJSRestrictionsProxy, _IKJSRestrictions>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) long long maxMovieRank;
@property (readonly, nonatomic) long long maxTVShowRank;
@property (readonly, nonatomic) BOOL allowsExplicit;
@property (readonly, nonatomic) BOOL allowsMusicVideos;
@property (readonly, nonatomic) BOOL allowsErotica;
@property (readonly, nonatomic) long long maxAppRank;
@property (readonly, nonatomic) BOOL allowArtistActivity;
@property (readonly, nonatomic) NSString *maxAppRating;
@property (readonly, nonatomic) BOOL appInstallationAllowed;
@property (readonly, nonatomic) BOOL appAnalyticsAllowed;
@property (readonly, nonatomic) BOOL allowsITunes;
@property (readonly, nonatomic) BOOL allowsShowingUndownloadedTVShows;
@property (readonly, nonatomic) BOOL allowsShowingUndownloadedMovies;

+ (id)restrictionsDidChangeNotificationName;

- (id)_contentRestrictionsCountryCode;
- (id)_ratingForSetting:(id)a0 domain:(id)a1 countryCode:(id)a2;
- (id)asPrivateIKJSRestrictions;
- (id)maxMovieRatingForCountry:(id)a0;
- (id)maxTVShowRatingForCountry:(id)a0;

@end
