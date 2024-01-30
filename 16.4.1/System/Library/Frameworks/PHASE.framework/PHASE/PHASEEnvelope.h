@class NSArray, PHASENumericPair;

@interface PHASEEnvelope : NSObject {
    struct unique_ptr<Phase::Envelope<double>, std::default_delete<Phase::Envelope<double>>> { struct __compressed_pair<Phase::Envelope<double> *, std::default_delete<Phase::Envelope<double>>> { void *__value_; } __ptr_; } _envelope;
}

@property (readonly, nonatomic) void /* unknown type, empty encoding */ startPoint;
@property (readonly, copy, nonatomic) NSArray *segments;
@property (readonly, nonatomic) PHASENumericPair *domain;
@property (readonly, nonatomic) PHASENumericPair *range;

+ (id)new;

- (id).cxx_construct;
- (double)evaluate:(double)a0;
- (id)init;
- (void).cxx_destruct;
- (double)evaluateForValue:(double)a0;
- (id)initWithStartPoint:(SEL)a0 segments:(id)a1;

@end
