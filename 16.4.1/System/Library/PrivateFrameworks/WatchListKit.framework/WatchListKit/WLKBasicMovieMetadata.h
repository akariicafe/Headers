@class NSString, NSDate, WLKRottenTomatoesRating;

@interface WLKBasicMovieMetadata : WLKBasicContentMetadata

@property (readonly, copy, nonatomic) NSString *studio;
@property (readonly, nonatomic) WLKRottenTomatoesRating *rottenTomatoesRating;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) NSDate *releaseDate;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;

@end
