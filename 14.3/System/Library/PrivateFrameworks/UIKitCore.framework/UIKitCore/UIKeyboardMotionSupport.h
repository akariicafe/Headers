@class UIScreen, NSString, NSDictionary, UIWindowScene;
@protocol UISplitKeyboardSource;

@interface UIKeyboardMotionSupport : NSObject <_UIScreenBasedObject> {
    UIScreen *_screen;
    UIWindowScene *_canvas;
    id<UISplitKeyboardSource> _controller;
}

@property (nonatomic) id<UISplitKeyboardSource> masterController;
@property (readonly) UIScreen *_intendedScreen;
@property (readonly) NSDictionary *_options;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)supportForUIScene:(id)a0;
+ (id)supportForScreen:(id)a0;

- (id)_initWithCanvas:(id)a0 options:(id)a1;
- (BOOL)_matchingOptions:(id)a0;
- (id)_intendedCanvas;
- (id)_initWithScreen:(id)a0 options:(id)a1;
- (void)dealloc;
- (void)_updatedController;
- (void)_disconnectingController:(id)a0;
- (void)_connectController:(id)a0;

@end
