@interface PSSpecifierAction : NSObject <NSCopying>

@property (copy, nonatomic) id /* block */ getter;
@property (copy, nonatomic) id /* block */ setter;

+ (id)actionWithGetter:(id /* block */)a0 setter:(id /* block */)a1;
+ (id)actionWithTarget:(id)a0 getterSelector:(SEL)a1 setterSelector:(SEL)a2;
+ (id)actionWithBoolDetailClass:(Class)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
