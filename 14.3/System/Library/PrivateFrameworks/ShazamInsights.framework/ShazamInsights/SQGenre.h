@class NSString;

@interface SQGenre : NSObject

@property (copy, nonatomic) NSString *label;
@property (nonatomic) float score;

+ (id)genreWithLabel:(id)a0 score:(float)a1;

- (void).cxx_destruct;

@end
