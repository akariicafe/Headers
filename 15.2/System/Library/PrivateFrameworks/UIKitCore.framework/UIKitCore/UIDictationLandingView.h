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

+ (id)activeInstance;
+ (id)sharedInstance;
+ (long long)fallbackPlaceholderLength;
+ (double)diameterForLineHeight:(double)a0;
+ (double)widthForLineHeight:(double)a0;

- (id)_timingFunctionForAnimation;
- (id)_basicAnimationForView:(id)a0 withKeyPath:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)stopLanding;
- (void)updatePosition;
- (void)startLandingIfNecessary;
- (void)stopLandingForError;
- (void)clearRotation;
- (void)hideCursor;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)advanceLanding:(id)a0;
- (void)showCursor;
- (void)startDisplayLinkIfNecessary;
- (void)shrinkWithCompletion:(id)a0;
- (BOOL)delegateWasEmpty;
- (void)errorShakeDidFinish;
- (BOOL)hasActivePlaceholder;
- (double)fadeOutDuration;
- (void)rotateBy:(double)a0;
- (void)dealloc;

@end
