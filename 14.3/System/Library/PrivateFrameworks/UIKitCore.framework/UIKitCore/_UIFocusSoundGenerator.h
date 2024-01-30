@protocol _UIFocusSoundPlayer;

@interface _UIFocusSoundGenerator : NSObject

@property (readonly, nonatomic) id<_UIFocusSoundPlayer> focusSoundPlayer;

+ (void)registerURL:(id)a0 forIdentifier:(id)a1;
+ (id)defaultGenerator;
+ (void)_uiktest_unregisterURLForIdentifier:(id)a0;

- (void).cxx_destruct;
- (void)playSoundForFocusUpdateInContext:(id)a0;
- (id)initWithFocusSoundPlayer:(id)a0;

@end
