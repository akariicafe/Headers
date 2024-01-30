@class NSString, NSArray;

@interface AMSRatingSystem : NSObject

@property (readonly, nonatomic) NSString *kind;
@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) NSArray *contentRatings;
@property (readonly, nonatomic) NSString *ratingSystemID;

+ (id)ratingSystemWithDictionary:(id)a0;

- (void).cxx_destruct;
- (id)description;
- (id)initWithDictionary:(id)a0;

@end
