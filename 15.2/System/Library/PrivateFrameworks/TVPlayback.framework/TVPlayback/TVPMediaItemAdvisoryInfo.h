@class NSString;

@interface TVPMediaItemAdvisoryInfo : NSObject

@property (retain, nonatomic) NSString *ratingName;
@property (readonly, nonatomic) NSString *ratingDescription;

- (id)description;
- (void).cxx_destruct;
- (id)initWithRatingDescription:(id)a0;

@end
