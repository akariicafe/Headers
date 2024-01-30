@class NSString;

@interface OKActionBindingCustom : OKActionBinding

@property (copy, nonatomic) NSString *name;

+ (id)supportedSettings;

- (id)initWithSettings:(id)a0;
- (id)init;
- (void)dealloc;
- (void)unload;
- (id)settingObjectForKey:(id)a0;
- (void)loadForResponder:(id)a0 scope:(unsigned long long)a1;
- (BOOL)respondsToAction:(id)a0 isTouchCountAgnostic:(BOOL)a1;
- (BOOL)ownsGestureRecognizer:(id)a0;

@end
