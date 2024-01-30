@class NSString, UITapGestureRecognizer;

@interface OKActionBindingTap : OKActionBinding <UIGestureRecognizerDelegate> {
    UITapGestureRecognizer *_tapGestureRecognizer;
}

@property (nonatomic) unsigned long long numberOfTapsRequired;
@property (nonatomic) unsigned long long numberOfTouchesRequired;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)supportedSettings;

- (void)unload;
- (id)initWithSettings:(id)a0;
- (void)handleTap:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)settingObjectForKey:(id)a0;
- (void)loadForResponder:(id)a0 scope:(unsigned long long)a1;
- (BOOL)respondsToAction:(id)a0 isTouchCountAgnostic:(BOOL)a1;
- (BOOL)ownsGestureRecognizer:(id)a0;

@end
