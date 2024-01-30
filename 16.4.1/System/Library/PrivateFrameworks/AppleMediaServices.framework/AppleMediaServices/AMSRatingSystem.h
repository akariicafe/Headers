@class NSString, NSArray;

@interface AMSRatingSystem : NSObject

@property (readonly, nonatomic) NSString *kind;
@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) NSArray *contentRatings;
@property (readonly, nonatomic) NSString *ratingSystemID;
@property (readonly, nonatomic) NSArray *types;

+ (id)ratingSystemWithDictionary:(id)a0;

- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
