@class NSString;

@interface OKActionBindingFocusTap : OKActionBindingTap <UIGestureRecognizerDelegate>

@property (nonatomic) unsigned long long mode;
@property (nonatomic) BOOL focusInEnabled;
@property (nonatomic) BOOL focusOutEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)supportedSettings;

- (id)initWithSettings:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (BOOL)performAction:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)unload;
- (id)settingObjectForKey:(id)a0;
- (void)handleTap:(id)a0;
- (void)loadForResponder:(id)a0 scope:(unsigned long long)a1;
- (BOOL)respondsToAction:(id)a0 isTouchCountAgnostic:(BOOL)a1;
- (BOOL)ownsGestureRecognizer:(id)a0;

@end
