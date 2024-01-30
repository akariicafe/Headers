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

+ (void)CAMLParserStartElement:(id)a0;
+ (id)behaviorTypes;
+ (id)behaviorWithType:(id)a0;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (void)setValue:(id)a0 forKeyPath:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (void)setValue:(id)a0 forKey:(id)a1;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)valueForKeyPath:(id)a0;
- (id)CAMLTypeForKey:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)CAMLParser:(id)a0 setValue:(id)a1 forKey:(id)a2;
- (id)initWithType:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)didChangeValueForKey:(id)a0;
- (id)valueForKey:(id)a0;
- (void)dealloc;
- (struct Object { void /* function */ **x0; struct Atomic { struct { int x0; } x0; } x1; unsigned char x2 : 8; unsigned int x3 : 24; } *)CA_copyRenderValue;
- (void)encodeWithCAMLWriter:(id)a0;

@end
