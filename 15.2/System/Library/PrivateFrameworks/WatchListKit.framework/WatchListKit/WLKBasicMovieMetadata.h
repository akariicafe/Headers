@class NSString, NSDate, WLKRottenTomatoesRating;

@interface WLKBasicMovieMetadata : WLKBasicContentMetadata

@property (readonly, copy, nonatomic) NSString *studio;
@property (readonly, nonatomic) WLKRottenTomatoesRating *rottenTomatoesRating;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) NSDate *releaseDate;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
