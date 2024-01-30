@class NSString, NUAdContextDefinition;

@interface NUAdContextPropertyDefinition : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *keyPath;
@property (readonly, nonatomic) Class valueClass;
@property (readonly, nonatomic) unsigned long long requirement;
@property (readonly, nonatomic) id defaultValue;
@property (retain, nonatomic) NUAdContextDefinition *nestedDefinition;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)initWithKey:(id)a0 valueClass:(Class)a1 requirement:(unsigned long long)a2 defaultValue:(id)a3;
- (id)initWithKey:(id)a0 nestedDefinition:(id)a1 requirement:(unsigned long long)a2;
- (BOOL)validateValue:(id)a0;

@end
