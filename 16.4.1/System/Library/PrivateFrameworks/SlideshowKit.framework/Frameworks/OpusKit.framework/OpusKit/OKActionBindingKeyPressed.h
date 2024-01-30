@class NSString;

@interface OKActionBindingKeyPressed : OKActionBinding

@property (retain, nonatomic) NSString *keyPressed;
@property (nonatomic) BOOL isKeyUp;

+ (id)supportedSettings;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithSettings:(id)a0;
- (id)init;
- (BOOL)respondsToAction:(id)a0 isTouchCountAgnostic:(BOOL)a1;
- (void)setSettingIsKeyUp:(BOOL)a0;
- (void)setSettingKeyPressed:(id)a0;

@end
