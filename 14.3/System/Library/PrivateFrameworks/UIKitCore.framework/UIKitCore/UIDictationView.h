@class UIKeyboardDicationBackground, NSString, SUICFlamesView, UIButton;
@protocol UIDictationViewDisplayDelegate;

@interface UIDictationView : UIView <SUICFlamesViewDelegate> {
    UIKeyboardDicationBackground *_background;
    UIButton *_endpointButton;
    UIButton *_endpointButtonLandscape;
    int _state;
    BOOL _keyboardInTransition;
    BOOL _automaticAppearanceWasEnabled;
    SUICFlamesView *_flamesView;
}

@property (nonatomic) BOOL showLanguageLabel;
@property (nonatomic) BOOL switchingLanguage;
@property (nonatomic) id<UIDictationViewDisplayDelegate> displayDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (struct CGSize { double x0; double x1; })layoutSize;
+ (id)activeInstance;
+ (struct CGSize { double x0; double x1; })viewSize;
+ (Class)dictationViewClass;

- (void)show;
- (BOOL)visible;
- (void)dealloc;
- (void)highlightEndpointButton;
- (BOOL)isShowing;
- (float)audioLevelForFlamesView:(id)a0;
- (void)finishReturnToKeyboard;
- (struct CGSize { double x0; double x1; })currentScreenSize;
- (void)prepareForReturnToKeyboard;
- (id)endpointButton;
- (BOOL)drawsOwnBackground;
- (void)applicationEnteredBackground;
- (struct CGPoint { double x0; double x1; })positionForShow;
- (void)globeButtonPressed:(id)a0 withEvent:(id)a1 location:(struct CGPoint { double x0; double x1; })a2;
- (struct CGPoint { double x0; double x1; })backgroundOffset;
- (void)keyboardDidShow:(id)a0;
- (void)endpointButtonPressed;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setState:(int)a0;
- (struct CGPoint { double x0; double x1; })contentOffset;
- (void)returnToKeyboard;
- (void)applicationWillResignActive;

@end
