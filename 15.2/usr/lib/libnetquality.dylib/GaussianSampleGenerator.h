@interface GaussianSampleGenerator : NSObject {
    double V1;
    double V2;
    double S;
    int phase;
    double precision;
}

+ (id)generator;
+ (id)generatorWithPrecision:(double)a0;

- (double)nextSample;

@end
