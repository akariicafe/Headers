@interface MUPlaceRatingReviewTitleBuilder : NSObject

@property (readonly, nonatomic) unsigned long long titleType;
@property (nonatomic) BOOL supportsRatings;
@property (nonatomic) BOOL supportsReviews;
@property (nonatomic) BOOL supportsGuides;

- (id)buildTitleString;

@end
