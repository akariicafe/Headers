@interface ASVTextureConverter : NSObject

@property (readonly, nonatomic) long long converterType;

+ (id)defaultTextureConverters;
+ (id)newConverterOfType:(long long)a0;
+ (id)preferredConverterFromConverters:(id)a0 forTextureDescription:(id)a1;

- (unsigned long long)alignUp:(unsigned long long)a0 toAlignment:(unsigned long long)a1;
- (BOOL)canConvertTextureWithDescription:(id)a0;
- (struct { unsigned long long x0; unsigned long long x1; })estimatedMemoryDeltaForTextureWithDescription:(id)a0;

@end
