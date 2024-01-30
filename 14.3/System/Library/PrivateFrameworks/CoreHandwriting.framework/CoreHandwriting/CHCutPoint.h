@interface CHCutPoint : NSObject

@property (readonly, nonatomic) long long strokeIndex;
@property (readonly, nonatomic) long long pointIndex;
@property (readonly, nonatomic) BOOL isEndOfStroke;

+ (id)sortedCHCutPointArray:(id)a0;

- (long long)compare:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (BOOL)isStartOfStroke;
- (id)initWithStrokeIndex:(long long)a0 pointIndex:(long long)a1 isEndOfStroke:(BOOL)a2;

@end
