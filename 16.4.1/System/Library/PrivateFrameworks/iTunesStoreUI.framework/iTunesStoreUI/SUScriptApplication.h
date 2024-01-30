@class NSString, NSNumber;

@interface SUScriptApplication : SUScriptObject

@property (readonly, getter=isDelayingTerminate) id delayingTerminate;
@property (readonly, getter=isRunningInStoreDemoMode) id runningInStoreDemoMode;
@property (retain) id iconBadgeNumber;
@property (readonly) NSString *identifier;
@property (readonly) id screenHeight;
@property (readonly) id screenWidth;
@property id statusBarHidden;
@property long long statusBarStyle;
@property (readonly) NSString *version;
@property (readonly, getter=wasLaunchedFromLibrary) id launchedFromLibrary;
@property (readonly) NSNumber *exitStoreReasonButton;
@property (readonly) NSNumber *exitStoreReasonDownloadComplete;
@property (readonly) NSNumber *exitStoreReasonFatalError;
@property (readonly) NSNumber *exitStoreReasonGotoMainStore;
@property (readonly) NSNumber *exitStoreReasonOther;
@property (readonly) NSNumber *exitStoreReasonPurchase;
@property (readonly) long long statusBarAnimationFade;
@property (readonly) long long statusBarAnimationNone;
@property (readonly) long long statusBarAnimationSlide;
@property (readonly) long long statusBarStyleDefault;
@property (readonly) long long statusBarStyleBlackOpaque;
@property (readonly) long long statusBarStyleBlackTranslucent;

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)a0;
+ (id)webScriptNameForKeyName:(id)a0;

- (void)setVersion:(id)a0;
- (void)setIdentifier:(id)a0;
- (id)hostIdentifier;
- (void)setStatusBarHidden:(BOOL)a0 withAnimation:(long long)a1;
- (void)setStatusBarStyle:(long long)a0 animated:(BOOL)a1;
- (id)attributeKeys;
- (id)scriptAttributeKeys;
- (void)returnToLibrary;
- (void)beginDelayingTerminate;
- (void)endDelayingTerminate;
- (void)exitStoreWithReason:(id)a0;
- (void)scrollIconToVisible:(id)a0 shouldSuspend:(BOOL)a1;
- (void)showNewsstand;

@end
