@class NSString, NSArray;

@interface CAStateTransition : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *fromState;
@property (copy, nonatomic) NSString *toState;
@property (copy, nonatomic) NSArray *elements;

+ (void)CAMLParserStartElement:(id)a0;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)CAMLTypeForKey:(id)a0;
- (void)encodeWithCAMLWriter:(id)a0;
- (double)duration;
- (void)CAMLParser:(id)a0 setValue:(id)a1 forKey:(id)a2;
- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;

@end
