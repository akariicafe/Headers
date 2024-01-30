@class NSString, OADBaseStyles, OADDrawableDefaults;

@interface OADTheme : NSObject

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) OADBaseStyles *baseStyles;
@property (readonly, nonatomic) OADDrawableDefaults *drawableDefaults;

- (id)description;
- (BOOL)isEmpty;
- (void).cxx_destruct;
- (id)init;
- (void)validateTheme;

@end
