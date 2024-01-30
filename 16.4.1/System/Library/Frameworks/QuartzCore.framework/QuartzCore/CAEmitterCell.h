@class NSString, NSArray, NSDictionary;

@interface CAEmitterCell : NSObject <NSCopying, CAPropertyInfo, NSSecureCoding, CAMediaTiming> {
    void *_attr[2];
    void *_state;
    unsigned int _flags;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *particleType;
@property double orientationLatitude;
@property double orientationLongitude;
@property double orientationRange;
@property double rotation;
@property double rotationRange;
@property float mass;
@property float massRange;
@property (copy) NSString *contentsFrameMode;
@property unsigned int contentsFrameCount;
@property unsigned int contentsFramesPerRow;
@property float contentsFramesPerSecond;
@property (copy) NSArray *emitterBehaviors;
@property (copy) NSString *name;
@property (getter=isEnabled) BOOL enabled;
@property float birthRate;
@property float lifetime;
@property float lifetimeRange;
@property double emissionLatitude;
@property double emissionLongitude;
@property double emissionRange;
@property double velocity;
@property double velocityRange;
@property double xAcceleration;
@property double yAcceleration;
@property double zAcceleration;
@property double scale;
@property double scaleRange;
@property double scaleSpeed;
@property double spin;
@property double spinRange;
@property struct CGColor { } *color;
@property float redRange;
@property float greenRange;
@property float blueRange;
@property float alphaRange;
@property float redSpeed;
@property float greenSpeed;
@property float blueSpeed;
@property float alphaSpeed;
@property (retain) id contents;
@property struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } contentsRect;
@property double contentsScale;
@property (copy) NSString *minificationFilter;
@property (copy) NSString *magnificationFilter;
@property float minificationFilterBias;
@property (copy) NSArray *emitterCells;
@property (copy) NSDictionary *style;
@property double beginTime;
@property double duration;
@property float speed;
@property double timeOffset;
@property float repeatCount;
@property double repeatDuration;
@property BOOL autoreverses;
@property (copy) NSString *fillMode;

+ (id)defaultValueForKey:(id)a0;
+ (id)properties;
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)a0;
+ (void)CAMLParserStartElement:(id)a0;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)emitterCell;

- (void)setValue:(id)a0 forKeyPath:(id)a1;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (void)setValue:(id)a0 forKey:(id)a1;
- (id)valueForKeyPath:(id)a0;
- (id)CAMLTypeForKey:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)CAMLParser:(id)a0 setValue:(id)a1 forKey:(id)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)didChangeValueForKey:(id)a0;
- (id)debugDescription;
- (id)valueForKey:(id)a0;
- (void)dealloc;
- (struct Object { void /* function */ **x0; struct Atomic { struct { int x0; } x0; } x1; unsigned char x2 : 8; unsigned int x3 : 24; } *)CA_copyRenderValue;
- (BOOL)shouldArchiveValueForKey:(id)a0;
- (void)CA_prepareRenderValue;
- (id)valueForUndefinedKey:(id)a0;
- (BOOL)CA_validateValue:(id)a0 forKey:(id)a1;
- (BOOL)CAMLTypeSupportedForKey:(id)a0;
- (void)encodeWithCAMLWriter:(id)a0;

@end
