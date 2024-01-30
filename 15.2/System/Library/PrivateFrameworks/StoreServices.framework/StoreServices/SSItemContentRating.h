@class NSString, NSDictionary, SSItemArtworkImage, NSMutableDictionary;

@interface SSItemContentRating : NSObject <SSXPCCoding, NSCopying> {
    NSMutableDictionary *_dictionary;
}

@property (readonly, nonatomic) NSDictionary *contentRatingDictionary;
@property (readonly, nonatomic) SSItemArtworkImage *ratingSystemLogo;
@property (readonly, nonatomic, getter=isExplicitContent) BOOL explicitContent;
@property (nonatomic) long long rank;
@property (copy, nonatomic) NSString *ratingDescription;
@property (copy, nonatomic) NSString *ratingLabel;
@property (nonatomic) long long ratingSystem;
@property (readonly, nonatomic, getter=isRestricted) BOOL restricted;
@property (nonatomic) BOOL shouldHideWhenRestricted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)ratingSystemFromString:(id)a0;
+ (id)stringForRatingSystem:(long long)a0;

- (id)valueForProperty:(id)a0;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)a0;
- (id)init;
- (BOOL)_isRatingSystemForApps:(long long)a0;
- (BOOL)_isRatingSystemForMovies:(long long)a0;
- (BOOL)_isRatingSystemForTV:(long long)a0;
- (void)_setValueCopy:(id)a0 forProperty:(id)a1;
- (BOOL)_isRatingSystemForMusic:(long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (void)dealloc;
- (void)_setValue:(id)a0 forProperty:(id)a1;

@end
