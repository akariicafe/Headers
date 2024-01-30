@class NSMutableArray;

@interface SKKeyframeSequence : NSObject <NSSecureCoding, NSCopying> {
    unsigned long long _count;
    NSMutableArray *_values;
    NSMutableArray *_times;
    long long _interpolationMode;
    long long _repeatMode;
    struct SKCKeyframeSequence { int x0; int x1; long long x2; long long x3; float *x4; float *x5; } *_cKeyframeSequence;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long interpolationMode;
@property (nonatomic) long long repeatMode;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;
- (id)initWithCapacity:(unsigned long long)a0;
- (id)copy;
- (id)init;
- (id)initWithCount:(unsigned long long)a0;
- (void).cxx_destruct;
- (Class)_valueClass;
- (id)sampleAtTime:(double)a0;
- (void)setKeyframeValue:(id)a0 time:(double)a1 forIndex:(unsigned long long)a2;
- (struct SKCKeyframeSequence { int x0; int x1; long long x2; long long x3; float *x4; float *x5; } *)_createSKCKeyframeSequence;
- (void)_dirtySKCKeyframeSequence;
- (void)addKeyframeValue:(id)a0 time:(double)a1;
- (double)getKeyframeTimeForIndex:(unsigned long long)a0;
- (id)getKeyframeValueForIndex:(unsigned long long)a0;
- (id)initWithKeyframeValues:(id)a0 times:(id)a1;
- (BOOL)isEqualToSequence:(id)a0;
- (void)removeAllKeyframes;
- (void)removeKeyframeAtIndex:(unsigned long long)a0;
- (void)removeLastKeyframe;
- (void)setKeyframeTime:(double)a0 forIndex:(unsigned long long)a1;
- (void)setKeyframeValue:(id)a0 forIndex:(unsigned long long)a1;

@end
