@interface ICASPalettePosition : NSObject <AADataType>

@property (readonly, nonatomic) long long palettePosition;

- (id)toJsonValueAndReturnError:(id *)a0;
- (id)initWithPalettePosition:(long long)a0;

@end
