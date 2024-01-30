@class NSDictionary;

@interface PGRankedZeroKeyword : NSObject

@property (readonly) NSDictionary *zeroKeyword;
@property (readonly) double score;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithKeyword:(id)a0 score:(double)a1;

@end
