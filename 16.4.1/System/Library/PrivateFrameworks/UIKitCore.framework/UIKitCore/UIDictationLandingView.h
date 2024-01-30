@class NSString, CADisplayLink, UITextRange, NSOperation;
@protocol UITextCursorAssertion;

@interface UIDictationLandingView : UIView <_UIBasicAnimationFactory> {
    UITextRange *_range;
    id _placeholder;
    BOOL _didHaveText;
    double _angle;
    double _diameter;
    CADisplayLink *_displayLink;
    double _startTime;
    double _shrinkStartTime;
    BOOL _shrinking;
    NSOperation *_afterShrinkCompletionInvocation;
}

@property (nonatomic) BOOL willInsertResult;
@property (retain, nonatomic) id<UITextCursorAssertion> blinkAssertion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)activeInstance;
+ (double)diameterForLineHeight:(double)a0;
+ (long long)fallbackPlaceholderLength;
+ (double)widthForLineHeight:(double)a0;

- (double)fadeOutDuration;
- (void)rotateBy:(double)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (id)_basicAnimationForView:(id)a0 withKeyPath:(id)a1;
- (id)_timingFunctionForAnimation;
- (void).cxx_destruct;
- (void)advanceLanding:(id)a0;
- (void)clearRotation;
- (BOOL)delegateWasEmpty;
- (void)errorShakeDidFinish;
- (BOOL)hasActivePlaceholder;
- (void)hideCursor;
- (void)performRemoteSelector:(SEL)a0;
- (void)showCursor;
- (void)shrinkWithCompletion:(id)a0;
- (void)startDisplayLinkIfNecessary;
- (void)startLandingIfNecessary;
- (void)stopLanding;
- (void)stopLandingForError;
- (void)updatePosition;

@end
