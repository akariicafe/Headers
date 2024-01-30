@class NSString;
@protocol TPDialerKeypadDelegate;

@interface TPPhonePad : UIControl <TPDialerKeypadProtocol> {
    long long _downKey;
    long long _highlightKey;
    id<TPDialerKeypadDelegate> _delegate;
    BOOL _playsSounds;
    double _topHeight;
    double _midHeight;
    double _bottomHeight;
    double _leftWidth;
    double _midWidth;
    double _rightWidth;
    struct __CFSet { } *_inflightSounds;
    struct __CFDictionary { } *_keyToButtonMap;
    unsigned int _incompleteSounds;
    unsigned char _delegateSoundCallbacks : 1;
    unsigned char _soundsActivated : 1;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_delayedDeactivate;
+ (BOOL)launchFieldTestIfNeeded:(id)a0;
+ (BOOL)shouldStringAutoDial:(id)a0 givenLastChar:(char)a1;

- (BOOL)cancelTouchTracking;
- (BOOL)pointMostlyInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)removeFromSuperview;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHighlighted:(BOOL)a0;
- (void)setDelegate:(id)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)_stopAllSoundsForcingCallbacks:(BOOL)a0;
- (void)setPlaysSounds:(BOOL)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)highlightKeyAtIndex:(long long)a0;
- (long long)indexForHighlightedKey;
- (void).cxx_destruct;
- (void)_appSuspended;
- (id)_highlightedImage;
- (void)movedFromWindow:(id)a0;
- (void)movedToWindow:(id)a0;
- (double)_yFudge;
- (void)_activateSounds:(BOOL)a0;
- (void)_appResumed;
- (id)_buttonForKeyAtIndex:(unsigned long long)a0;
- (void)_handleKey:(id)a0 forUIEvent:(id)a1;
- (void)_handleKeyPressAndHoldForDownKey:(id)a0;
- (void)_handleKeyPressAndHoldForHighlightedKey:(id)a0;
- (void)_handleKeyPressAndHoldForKey:(long long)a0;
- (id)_imageByCroppingImage:(id)a0 toRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (int)_keyForPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)_keypadImage;
- (struct CGPoint { double x0; double x1; })_keypadOrigin;
- (void)_notifySoundCompletionIfNecessary:(unsigned int)a0;
- (void)_playSoundForKey:(unsigned long long)a0;
- (id)_pressedImage;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_rectForKey:(unsigned long long)a0;
- (void)_stopSoundForKey:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_updateRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withScale:(double)a1;
- (void)performTapActionCancelForHighlightedKey;
- (void)performTapActionDownForHighlightedKey;
- (void)performTapActionEndForHighlightedKey;
- (void)setButton:(id)a0 forKeyAtIndex:(unsigned long long)a1;
- (void)setNeedsDisplayForKey:(int)a0;

@end
