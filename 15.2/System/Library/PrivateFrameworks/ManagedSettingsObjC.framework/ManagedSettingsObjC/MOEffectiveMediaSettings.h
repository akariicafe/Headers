@class MOEffectiveBool, MOEffectiveInteger;

@interface MOEffectiveMediaSettings : NSObject

@property (readonly) MOEffectiveBool *denyBookstoreErotica;
@property (readonly) MOEffectiveBool *denyExplicitContent;
@property (readonly) MOEffectiveBool *denyMusicService;
@property (readonly) MOEffectiveInteger *maximumMovieRating;
@property (readonly) MOEffectiveInteger *maximumTVShowRating;

@end
