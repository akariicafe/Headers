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

+ (id)activeInstance;
+ (id)sharedInstance;
+ (struct CGSize { double x0; double x1; })layoutSize;
+ (Class)dictationViewClass;
+ (struct CGSize { double x0; double x1; })viewSize;

- (struct CGPoint { double x0; double x1; })contentOffset;
- (void)setState:(int)a0;
- (void)applicationWillResignActive;
- (void)globeButtonPressed:(id)a0 withEvent:(id)a1 location:(struct CGPoint { double x0; double x1; })a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)highlightEndpointButton;
- (void)returnToKeyboard;
- (struct CGPoint { double x0; double x1; })positionForShow;
- (BOOL)isShowing;
- (BOOL)visible;
- (struct CGPoint { double x0; double x1; })backgroundOffset;
- (id)endpointButton;
- (void)prepareForReturnToKeyboard;
- (float)audioLevelForFlamesView:(id)a0;
- (struct CGSize { double x0; double x1; })currentScreenSize;
- (void)keyboardDidShow:(id)a0;
- (void)applicationEnteredBackground;
- (void)endpointButtonPressed;
- (BOOL)drawsOwnBackground;
- (void)show;
- (void)dealloc;
- (void)finishReturnToKeyboard;

@end
