@class _UIPointVector;

@interface UIBoxcarFilterPointFIFO : UIPointFIFO

@property (nonatomic) unsigned long long width;
@property (nonatomic) float spacing;
@property (retain, nonatomic) _UIPointVector *prevPoints;

- (void)clear;
- (void)addPoint:(SEL)a0;
- (void)dealloc;
- (id)initWithFIFO:(id)a0 width:(unsigned long long)a1 spacing:(float)a2;
- (void)emitAveragedPoint;
- (id)initWithFIFO:(id)a0 width:(unsigned long long)a1;
- (void)flush;

@end
