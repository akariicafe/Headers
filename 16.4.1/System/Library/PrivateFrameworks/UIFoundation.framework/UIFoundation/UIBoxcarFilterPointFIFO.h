@class _UIPointVector;

@interface UIBoxcarFilterPointFIFO : UIPointFIFO

@property (nonatomic) unsigned long long width;
@property (nonatomic) float spacing;
@property (retain, nonatomic) _UIPointVector *prevPoints;

- (void)addPoint:(SEL)a0;
- (void)flush;
- (void)dealloc;
- (void)clear;
- (void)emitAveragedPoint;
- (id)initWithFIFO:(id)a0 width:(unsigned long long)a1;
- (id)initWithFIFO:(id)a0 width:(unsigned long long)a1 spacing:(float)a2;

@end
