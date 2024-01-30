@class NSString;

@interface DNDMutableMode : DNDMode

@property (copy, nonatomic) NSString *symbolImageName;
@property (copy, nonatomic) NSString *tintColorName;
@property (copy, nonatomic) NSString *name;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setTintColorName:(id)a0;
- (void)setSymbolImageName:(id)a0;
- (void)setName:(id)a0;

@end
