@class NSString, NSNumber;

@interface AMSContentRating : NSObject

@property (readonly, nonatomic) NSString *contentRatingID;
@property (readonly, nonatomic) NSString *kind;
@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *ratingDescription;
@property (readonly, nonatomic) NSNumber *value;

+ (id)contentRatingWithDictionary:(id)a0;

- (void).cxx_destruct;
- (id)description;
- (id)initWithDictionary:(id)a0;

@end
