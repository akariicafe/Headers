@class NSString, SSItemArtworkImage, NSDictionary;

@interface SUItemContentRating : NSObject <NSCopying> {
    NSDictionary *_dictionary;
}

@property (readonly, nonatomic, getter=isExplicitContent) BOOL explicitContent;
@property (nonatomic) long long rank;
@property (copy, nonatomic) NSString *ratingDescription;
@property (copy, nonatomic) NSString *ratingLabel;
@property (nonatomic) long long ratingSystem;
@property (copy, nonatomic) SSItemArtworkImage *ratingSystemLogo;
@property (readonly, nonatomic, getter=isRestricted) BOOL restricted;
@property (nonatomic) BOOL shouldHideWhenRestricted;

+ (long long)ratingSystemFromString:(id)a0;

- (id)valueForProperty:(id)a0;
- (BOOL)_isRatingSystemForApps:(long long)a0;
- (BOOL)_isRatingSystemForMovies:(long long)a0;
- (BOOL)_isRatingSystemForTV:(long long)a0;
- (BOOL)_isRatingSystemForMusic:(long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (void)dealloc;

@end
