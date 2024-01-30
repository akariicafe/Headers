@class NSString;

@interface CAEmitterBehavior : NSObject <NSSecureCoding> {
    unsigned int _type;
    NSString *_name;
    void *_attr;
    void *_cache;
    unsigned int _flags;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *type;
@property (copy) NSString *name;
@property (getter=isEnabled) BOOL enabled;

+ (id)behaviorTypes;
+ (id)behaviorWithType:(id)a0;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (void)CAMLParserStartElement:(id)a0;

- (id)CAMLTypeForKey:(id)a0;
- (void)encodeWithCAMLWriter:(id)a0;
- (void)CAMLParser:(id)a0 setValue:(id)a1 forKey:(id)a2;
- (id)valueForKey:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)setValue:(id)a0 forKey:(id)a1;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)setValue:(id)a0 forKeyPath:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithType:(id)a0;
- (void)dealloc;
- (struct Object { void /* function */ **x0; struct Atomic { struct { int x0; } x0; } x1; unsigned int x2; } *)CA_copyRenderValue;
- (void)didChangeValueForKey:(id)a0;
- (id)valueForKeyPath:(id)a0;

@end
