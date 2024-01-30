@class NSString, NUSpheroid, NSDate, NSMutableArray;

@interface NUScene : NSObject <NUAnimatable> {
    unsigned long long _snap;
    NSMutableArray *_animations;
    NSDate *_date;
    unsigned char _isUpdateNeeded : 1;
}

@property (readonly, nonatomic) void /* unknown type, empty encoding */ position;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ target;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ up;
@property (retain, nonatomic) NUSpheroid *focus;
@property (nonatomic) float orbit;
@property (nonatomic) float roll;
@property (nonatomic) int minFrameInterval;
@property (readonly, nonatomic) int acceptableFrameInterval;
@property (nonatomic) unsigned long long snap;
@property (nonatomic) unsigned long long backgroundType;
@property (nonatomic) unsigned long long projectionType;
@property (nonatomic) unsigned long long collectionType;
@property (readonly, copy, nonatomic) NSMutableArray *spheroids;
@property (readonly, nonatomic) NSDate *date;
@property (copy, nonatomic) id /* block */ currentDateBlock;
@property (nonatomic, getter=isUpdatable) unsigned char updatable : 1;
@property (readonly, nonatomic) float yearsSince1970;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (unsigned long long)snap;
- (id)date;
- (void)addAnimation:(id)a0;
- (void)update:(float)a0;
- (void)removeAnimation:(id)a0;
- (void)updateSunLocationAnimated:(BOOL)a0;
- (id)spheroidOfType:(unsigned long long)a0;
- (void)setSnap:(unsigned long long)a0;
- (id)initWithSphereoids:(unsigned long long)a0 currentDateBlock:(id /* block */)a1;
- (void)removeAllAnimationsFor:(id)a0 withKeys:(unsigned long long)a1;
- (BOOL)isAnimating:(id)a0 forKeys:(unsigned long long)a1;
- (void)setCamera:(id)a0 target:(SEL)a1 up:(float)a2 roll:(void /* unknown type, empty encoding */)a3;
- (void /* unknown type, empty encoding */)animatedFloatForKey:(unsigned long long)a0;
- (void)setAnimatedFloat:(SEL)a0 forKey:(unsigned long long)a1;
- (void)updateFromDateIfNeeded;

@end
