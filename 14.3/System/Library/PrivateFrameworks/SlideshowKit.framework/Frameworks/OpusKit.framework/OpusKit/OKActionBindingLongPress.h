@class NSString, UILongPressGestureRecognizer;

@interface OKActionBindingLongPress : OKActionBinding <UIGestureRecognizerDelegate> {
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
}

@property (nonatomic) unsigned long long numberOfTapsRequired;
@property (nonatomic) unsigned long long numberOfTouchesRequired;
@property (nonatomic) double minimumPressDuration;
@property (nonatomic) double allowableMovement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)supportedSettings;

- (id)initWithSettings:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)handleLongPress:(id)a0;
- (void)unload;
- (id)settingObjectForKey:(id)a0;
- (void)loadForResponder:(id)a0 scope:(unsigned long long)a1;
- (BOOL)respondsToAction:(id)a0 isTouchCountAgnostic:(BOOL)a1;
- (BOOL)ownsGestureRecognizer:(id)a0;

@end
