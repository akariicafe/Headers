@class NSString;

@interface CAStateAddElement : CAStateElement

@property (copy, nonatomic) NSString *keyPath;
@property (retain, nonatomic) id object;
@property (retain, nonatomic) id beforeObject;

+ (BOOL)supportsSecureCoding;

- (BOOL)CAMLTypeSupportedForKey:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)apply:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)CAMLTypeForKey:(id)a0;
- (BOOL)matches:(id)a0;
- (void)foreachLayer:(id /* block */)a0;
- (void)encodeWithCAMLWriter:(id)a0;
- (void)CAMLParser:(id)a0 setValue:(id)a1 forKey:(id)a2;
- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;

@end
