@class NSNumber, WebScriptObject, NSString, SUScriptCanvasFunction, SUScriptFunction, SUScriptViewController, SUScriptWindowContext;

@interface SUScriptWindow : SUScriptObject {
    SUScriptViewController *_backViewController;
    BOOL _canSwipeToDismiss;
    SUScriptViewController *_frontViewController;
    id _height;
    SUScriptCanvasFunction *_maskFunction;
    id _shadowOpacity;
    id _shadowRadius;
    SUScriptFunction *_shouldDismissFunction;
    id _width;
}

@property (readonly) SUScriptWindowContext *context;
@property (copy) id canSwipeToDismiss;
@property (retain) SUScriptViewController *backViewController;
@property (retain) SUScriptViewController *frontViewController;
@property (retain) NSNumber *height;
@property (retain) WebScriptObject *maskFunction;
@property (retain) NSNumber *shadowOpacity;
@property (retain) NSNumber *shadowRadius;
@property (retain) WebScriptObject *shouldDismissFunction;
@property (readonly) NSString *style;
@property (retain) NSNumber *width;
@property (readonly) SUScriptViewController *windowParentViewController;

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)a0;
+ (id)webScriptNameForKeyName:(id)a0;
+ (void)dismissWindowsWithOptions:(id)a0;

- (id)initWithContext:(id)a0;
- (void)show:(id)a0;
- (id)init;
- (void)flip:(id)a0;
- (void)dealloc;
- (id)attributeKeys;
- (void)dismiss:(id)a0;
- (id)_className;
- (id)scriptAttributeKeys;
- (void)_registerForOverlayNotifications;
- (id)_copySafeTransitionOptionsFromOptions:(id)a0;
- (id)_backgroundViewController:(BOOL)a0;
- (id)_overlayViewController:(BOOL)a0;
- (id)_newOverlayTransitionWithOptions:(id)a0;
- (struct CGSize { double x0; double x1; })_overlaySize;
- (void)_overlayDidDismissNotification:(id)a0;
- (void)_overlayDidFlipNotification:(id)a0;
- (void)_overlayDidShowNotification:(id)a0;

@end
