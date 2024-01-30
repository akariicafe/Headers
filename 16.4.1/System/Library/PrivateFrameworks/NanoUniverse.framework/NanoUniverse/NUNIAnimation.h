@protocol NUNIAnimationObserver, NUNIAnimatable;

@interface NUNIAnimation : NSObject {
    void /* unknown type, empty encoding */ _ctrl1;
    void /* unknown type, empty encoding */ _ctrl2;
    void /* unknown type, empty encoding */ _values[75];
    int _valuesCount;
    float _prevTime;
    float _pauseTime;
}

@property (nonatomic) float startTime;
@property (nonatomic) float duration;
@property (nonatomic) float delay;
@property (nonatomic) int frameInterval;
@property (nonatomic) void /* unknown type, empty encoding */ from;
@property (nonatomic) void /* unknown type, empty encoding */ to;
@property (nonatomic, getter=isRepeat) BOOL repeat;
@property (nonatomic, getter=isPaused) BOOL paused;
@property (nonatomic) unsigned long long function;
@property (nonatomic) unsigned long long key;
@property (weak, nonatomic) id<NUNIAnimatable> animatable;
@property (weak, nonatomic) id<NUNIAnimationObserver> observer;

- (BOOL)update:(float)a0;
- (void)apply:(float)a0;
- (void).cxx_destruct;
- (id)initWithAnimatable:(id)a0 from:(SEL)a1 to:(id)a2 key:(unsigned long long)a3;
- (id)initWithAnimatable:(id)a0 from:(SEL)a1 to:(id)a2 ctrl1:(unsigned long long)a3 ctrl2:(void /* unknown type, empty encoding */)a4 key:(void /* unknown type, empty encoding */)a5;
- (id)initWithAnimatable:(SEL)a0 value:(id)a1 key:(unsigned long long)a2;
- (id)initWithAnimatable:(id)a0 values:(void *)a1 count:(int)a2 key:(unsigned long long)a3;

@end
