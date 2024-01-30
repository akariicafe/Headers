@class NSString;

@interface CHRecurrentNeuralNetwork : NSObject

@property (readonly, retain, nonatomic) NSString *modelName;

- (void)dealloc;
- (id)normalizedDrawing:(id)a0 targetHeight:(double)a1 minimumDrawingSize:(struct CGSize { double x0; double x1; })a2 interpolationDistance:(double)a3 outScaleFactor:(double *)a4 outputPointMap:(struct vector<std::__1::map<long, long, std::__1::less<long>, std::__1::allocator<std::__1::pair<const long, long> > >, std::__1::allocator<std::__1::map<long, long, std::__1::less<long>, std::__1::allocator<std::__1::pair<const long, long> > > > > { } *)a5;
- (id)initWithModelName:(id)a0;

@end
