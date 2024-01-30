@class NSString, CAAnimation;

@interface CAStateAddAnimation : CAStateElement

@property (copy, nonatomic) NSString *key;
@property (retain, nonatomic) CAAnimation *animation;

+ (BOOL)supportsSecureCoding;

- (id)CAMLTypeForKey:(id)a0;
- (void)encodeWithCAMLWriter:(id)a0;
- (BOOL)matches:(id)a0;
- (void)apply:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)keyPath;
- (id)debugDescription;

@end
