@class NSDictionary;

@interface PISegmentationGatingRanges : NSObject

@property (readonly, copy, nonatomic) NSDictionary *ranges;

+ (id)loadFromURL:(id)a0;

- (void).cxx_destruct;
- (id)initWithRanges:(id)a0;

@end
