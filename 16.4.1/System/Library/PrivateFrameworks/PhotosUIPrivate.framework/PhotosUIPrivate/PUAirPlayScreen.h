@class UIScreen, NSString, UIWindow, UIViewController;

@interface PUAirPlayScreen : NSObject <PXSettingsKeyObserver>

@property (retain, nonatomic, setter=_setScreen:) UIScreen *screen;
@property (retain, nonatomic, setter=_setIdentifier:) NSString *identifier;
@property (nonatomic, setter=_setType:) unsigned long long type;
@property (nonatomic, setter=_setSize:) struct CGSize { double width; double height; } size;
@property (retain, nonatomic, setter=_setWindow:) UIWindow *_window;
@property (readonly, nonatomic) NSString *_typeName;
@property (readonly, nonatomic) unsigned long long placeholderType;
@property (retain, nonatomic) UIViewController *rootViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (id)init;
- (id)initWithScreen:(id)a0;
- (void).cxx_destruct;
- (void)_updateWindow;
- (BOOL)isEqualToAirPlayScreen:(id)a0;

@end
