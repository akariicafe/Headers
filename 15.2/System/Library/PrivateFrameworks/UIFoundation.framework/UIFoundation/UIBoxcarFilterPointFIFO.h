@class _UIPointVector;

@interface UIBoxcarFilterPointFIFO : UIPointFIFO

@property (nonatomic) unsigned long long width;
@property (nonatomic) float spacing;
@property (retain, nonatomic) _UIPointVector *prevPoints;

- (void)flush;
- (void)clear;
- (void)emitAveragedPoint;
- (id)initWithFIFO:(id)a0 width:(unsigned long long)a1;
- (id)initWithFIFO:(id)a0 width:(unsigned long long)a1 spacing:(float)a2;
- (void)addPoint:(SEL)a0;
- (void)dealloc;

@end
