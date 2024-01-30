@class NSArray;

@interface _NTKPhotoIndexGenerator : NSObject {
    long long _n;
    long long _count;
    long long _prevIndex;
    long long _step;
    NSArray *_stepSizes;
}

- (id)initWithSize:(long long)a0;
- (void)setIndex:(long long)a0;
- (void).cxx_destruct;
- (void)reset;
- (long long)nextRandom;
- (long long)nextSequential;

@end
