@class CAStateControllerTransition, NSString, CAMediaTimingFunction;
@protocol CAAnimationDelegate;

@interface CAAnimation : NSObject <NSMutableCopying, CAPropertyInfo, NSSecureCoding, NSCopying, CAMediaTiming, CAAction> {
    void *_attr;
    unsigned int _flags;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (weak) CAStateControllerTransition *CAStateControllerTransition;
@property (getter=isEnabled) BOOL enabled;
@property (copy) NSString *beginTimeMode;
@property double frameInterval;
@property long long preferredFramesPerSecond;
@property BOOL discretizesTime;
@property (retain) CAMediaTimingFunction *timingFunction;
@property (retain) id<CAAnimationDelegate> delegate;
@property (getter=isRemovedOnCompletion) BOOL removedOnCompletion;
@property double beginTime;
@property double duration;
@property float speed;
@property double timeOffset;
@property float repeatCount;
@property double repeatDuration;
@property BOOL autoreverses;
@property (copy) NSString *fillMode;

+ (id)properties;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)animation;
+ (BOOL)resolveInstanceMethod:(SEL)a0;
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)a0;
+ (id)defaultValueForKey:(id)a0;
+ (void /* function */ *)CA_setterForProperty:(const struct _CAPropertyInfo { unsigned int x0; SEL x1[2]; unsigned short x2 : 16; unsigned short x3 : 16; char *x4; struct __CFString *x5; } *)a0;
+ (void /* function */ *)CA_getterForProperty:(const struct _CAPropertyInfo { unsigned int x0; SEL x1[2]; unsigned short x2 : 16; unsigned short x3 : 16; char *x4; struct __CFString *x5; } *)a0;
+ (BOOL)CA_encodesPropertyConditionally:(unsigned int)a0 type:(int)a1;
+ (void)CAMLParserStartElement:(id)a0;

- (void)setValue:(id)a0 forKeyPath:(id)a1;
- (BOOL)_setCARenderAnimation:(struct Animation { void /* function */ **x0; struct Atomic { struct { int x0; } x0; } x1; unsigned long long x2; float x3; struct Ref<CA::Render::Timing> { struct Timing *x0; } x4; struct Ref<CA::Render::Vector> { struct Vector *x0; } x5; struct __CFString *x6; unsigned long long x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; } *)a0 layer:(id)a1;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (void)setDefaultDuration:(double)a0;
- (unsigned int)_propertyFlagsForLayer:(id)a0;
- (BOOL)CAMLTypeSupportedForKey:(id)a0;
- (void)runActionForKey:(id)a0 object:(id)a1 arguments:(id)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (struct Object { void /* function */ **x0; struct Atomic { struct { int x0; } x0; } x1; } *)CA_copyRenderValue;
- (id)valueForUndefinedKey:(id)a0;
- (id)valueForKey:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)CAMLTypeForKey:(id)a0;
- (void)applyForTime:(double)a0 presentationObject:(id)a1 modelObject:(id)a2;
- (void)encodeWithCAMLWriter:(id)a0;
- (BOOL)shouldArchiveValueForKey:(id)a0;
- (void)setValue:(id)a0 forKey:(id)a1;
- (void)CAMLParser:(id)a0 setValue:(id)a1 forKey:(id)a2;
- (BOOL)removedOnCompletion;
- (id)debugDescription;
- (id)valueForKeyPath:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
