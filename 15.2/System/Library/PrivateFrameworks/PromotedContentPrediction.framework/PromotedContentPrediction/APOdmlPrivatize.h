@interface APOdmlPrivatize : NSObject

- (void)addPrivatization:(id)a0 recipe:(id)a1 completion:(id /* block */)a2;
- (BOOL)_addNoise:(float *)a0 resultsCount:(unsigned long long)a1 maxNorm:(double)a2 normBinCount:(unsigned int)a3;

@end
