@class MPAVController, MPAVItem, NSString, NSMutableDictionary, MPDetailSlider, UINavigationBar;
@protocol MPVideoControllerProtocol, MPVideoOverlayDelegate;

@interface MPVideoOverlay : UIView <MPVideoOverlay, MPDetailSliderDelegate> {
    MPDetailSlider *_scrubControl;
    long long _interfaceOrientation;
    BOOL _controlsAutohideDisabled;
    BOOL _wantsTick;
    NSMutableDictionary *_tickTimeEvents;
    double _lastTickTime;
}

@property (weak, nonatomic) id<MPVideoControllerProtocol> videoViewController;
@property (nonatomic) BOOL allowsWirelessPlayback;
@property (nonatomic) BOOL navigationBarHidden;
@property (retain, nonatomic) MPAVController *player;
@property (readonly, retain, nonatomic) UINavigationBar *navigationBar;
@property (weak, nonatomic) id<MPVideoOverlayDelegate> delegate;
@property (retain, nonatomic) MPAVItem *item;
@property (nonatomic) unsigned long long desiredParts;
@property (nonatomic) unsigned long long visibleParts;
@property (nonatomic) unsigned long long disabledParts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stopTicking;
- (void)startTicking;
- (void)_itemDurationDidChangeNotification:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)detailSliderTrackingDidBegin:(id)a0;
- (void)detailSliderTrackingDidEnd:(id)a0;
- (void)detailSliderTrackingDidCancel:(id)a0;
- (void)detailSlider:(id)a0 didChangeValue:(float)a1;
- (BOOL)updateTimeBasedValues;
- (void)showAlternateTracks;
- (void)hideAlternateTracks;
- (void)didMoveToSuperview;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)_duration;
- (void)_endSliderTracking;
- (void)_tickNotification:(id)a0;
- (void)performSelector:(SEL)a0 whenTickingPastTime:(double)a1;
- (double)_playableDuration;
- (void)cancelPreviousPerformTickEventsForSelector:(SEL)a0;
- (void)setDesiredParts:(unsigned long long)a0 animate:(BOOL)a1;
- (void)setVisibleParts:(unsigned long long)a0 animate:(BOOL)a1;
- (void)registerForPlayerNotifications;
- (void)unregisterForPlayerNotifications;

@end
