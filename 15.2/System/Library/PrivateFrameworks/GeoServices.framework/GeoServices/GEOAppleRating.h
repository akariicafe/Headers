@class NSString, GEOPDRating;

@interface GEOAppleRating : NSObject {
    GEOPDRating *_pdRating;
}

@property (readonly, nonatomic) long long ratingType;
@property (readonly, copy, nonatomic) NSString *localizedTitle;
@property (readonly, nonatomic) double percentage;
@property (readonly, nonatomic) double score;
@property (readonly, nonatomic) double maxScore;
@property (readonly, nonatomic) int numberOfRatingsUsedForScore;
@property (readonly, nonatomic) BOOL isRecommended;

- (void).cxx_destruct;
- (id)initWithRating:(id)a0;

@end
