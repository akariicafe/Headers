@class NSString, NSBundle;

@interface RENamedImage : REImage

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) NSBundle *bundle;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithName:(id)a0 inBundle:(id)a1;

@end
