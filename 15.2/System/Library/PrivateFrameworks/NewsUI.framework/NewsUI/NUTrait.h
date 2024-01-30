@class NSMutableDictionary;

@interface NUTrait : NSObject <NSCopying>

@property (readonly, nonatomic) double defaultValue;
@property (readonly, nonatomic) NSMutableDictionary *traitBlocks;

- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDefaultValue:(double)a0;
- (double)valueForTraitCollection:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (id)when:(unsigned long long)a0 block:(id /* block */)a1;
- (double)valueForTraitCollection:(id)a0 size:(struct CGSize { double x0; double x1; })a1 deviceTrait:(id)a2;

@end
