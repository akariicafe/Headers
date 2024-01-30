@class NSString;

@interface CAFilter : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    unsigned int _type;
    NSString *_name;
    unsigned int _flags;
    void *_attr;
    void *_cache;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *type;
@property (copy) NSString *name;
@property (getter=isEnabled) BOOL enabled;
@property BOOL cachesInputImage;
@property (getter=isAccessibility) BOOL accessibility;

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)filterWithName:(id)a0;
+ (id)filterWithType:(id)a0;
+ (void)CAMLParserStartElement:(id)a0;
+ (id)filterTypes;

- (BOOL)enabled;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (struct Object { void /* function */ **x0; struct Atomic { struct { int x0; } x0; } x1; } *)CA_copyRenderValue;
- (id)valueForKey:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithType:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)CAMLTypeForKey:(id)a0;
- (id)description;
- (void)encodeWithCAMLWriter:(id)a0;
- (void)setValue:(id)a0 forKey:(id)a1;
- (void)CAMLParser:(id)a0 setValue:(id)a1 forKey:(id)a2;
- (void)setDefaults;
- (id)initWithName:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
