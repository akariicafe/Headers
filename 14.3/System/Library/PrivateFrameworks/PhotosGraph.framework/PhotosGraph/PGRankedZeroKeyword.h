@class NSDictionary;

@interface PGRankedZeroKeyword : NSObject

@property (readonly) NSDictionary *zeroKeyword;
@property (readonly) double score;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithKeyword:(id)a0 score:(double)a1;

@end
