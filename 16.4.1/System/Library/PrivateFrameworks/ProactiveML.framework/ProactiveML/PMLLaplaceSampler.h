@class NSString;

@interface PMLLaplaceSampler : NSObject <PMLSampler> {
    struct { unsigned long long s[2]; } _rng;
    float _magnitude;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (float)sample;
- (id)initWithMagnitude:(float)a0;
- (id)initWithMagnitude:(float)a0 seed:(unsigned long long)a1;

@end
