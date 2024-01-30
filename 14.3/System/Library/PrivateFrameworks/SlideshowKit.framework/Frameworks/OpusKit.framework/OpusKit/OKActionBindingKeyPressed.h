@class NSString;

@interface OKActionBindingKeyPressed : OKActionBinding

@property (retain, nonatomic) NSString *keyPressed;
@property (nonatomic) BOOL isKeyUp;

+ (id)supportedSettings;

- (id)initWithSettings:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)respondsToAction:(id)a0 isTouchCountAgnostic:(BOOL)a1;
- (void)setSettingKeyPressed:(id)a0;
- (void)setSettingIsKeyUp:(BOOL)a0;

@end
