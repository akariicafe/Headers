@class NSString;

@interface SUItemReviewStatistics : NSObject <NSCopying>

@property (nonatomic) float averageUserRating;
@property (nonatomic) long long numberOfUserRatings;
@property (copy, nonatomic) NSString *numberOfUserRatingsString;
@property (nonatomic) long long numberOfUserReviews;
@property (copy, nonatomic) NSString *numberOfUserReviewsString;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (void)dealloc;

@end
