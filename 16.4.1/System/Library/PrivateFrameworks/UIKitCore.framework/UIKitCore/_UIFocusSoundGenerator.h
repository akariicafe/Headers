@protocol _UIFocusSoundPlayer;

@interface _UIFocusSoundGenerator : NSObject

@property (readonly, nonatomic) id<_UIFocusSoundPlayer> focusSoundPlayer;

+ (void)_uiktest_unregisterURLForIdentifier:(id)a0;
+ (id)defaultGenerator;
+ (void)registerURL:(id)a0 forIdentifier:(id)a1;

- (void).cxx_destruct;
- (id)initWithFocusSoundPlayer:(id)a0;
- (void)playSoundForFocusUpdateInContext:(id)a0;

@end
