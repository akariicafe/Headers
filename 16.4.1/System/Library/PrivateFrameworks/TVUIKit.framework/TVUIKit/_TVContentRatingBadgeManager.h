@class NSCache, NSDictionary;

@interface _TVContentRatingBadgeManager : NSObject

@property (retain, nonatomic) NSCache *imageCache;
@property (retain, nonatomic) NSDictionary *badgeDescriptors;
@property (nonatomic) BOOL cachesImages;

+ (id)sharedInstance;
+ (void)_addImageDescriptorToDictionary:(id)a0 ratingSystem:(long long)a1 ratingLabel:(id)a2 resourceName:(id)a3 isTemplatedImage:(BOOL)a4;
+ (id)_badgeDescriptorLookupKeyWithRatingLabel:(id)a0 inRatingSystem:(long long)a1;
+ (id)_cleanedRatingLabel:(id)a0;
+ (id)_imageForUnknownRatingLabel:(id)a0;
+ (id)_imageLookupKeyWithRatingLabel:(id)a0 inRatingSystem:(long long)a1;

- (void).cxx_destruct;
- (id)_badgeDescriptorForContentRating:(id)a0;
- (id)_badgeDescriptorForRatingLabel:(id)a0 inRatingSystem:(long long)a1;
- (id)badgeForContentRating:(id)a0 drawUnknownRatingBadge:(BOOL)a1;
- (id)badgeForRatingLabel:(id)a0 inRatingSystem:(long long)a1 drawUnknownRatingBadge:(BOOL)a2;
- (BOOL)isTemplatedBadgeForContentRating:(id)a0;

@end
