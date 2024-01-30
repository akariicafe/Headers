@class CALayer, CAAnimation, NSString;

@interface CAStateTransitionElement : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (getter=isEnabled) BOOL enabled;
@property (weak, nonatomic) CALayer *target;
@property (retain, nonatomic) CAAnimation *animation;
@property (copy, nonatomic) NSString *key;
@property (nonatomic) double beginTime;
@property (nonatomic) double duration;

+ (void)CAMLParserStartElement:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)CAMLTypeForKey:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)CAMLParser:(id)a0 setValue:(id)a1 forKey:(id)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (void)dealloc;
- (id)init;
- (void)encodeWithCAMLWriter:(id)a0;
- (void).cxx_destruct;

@end
