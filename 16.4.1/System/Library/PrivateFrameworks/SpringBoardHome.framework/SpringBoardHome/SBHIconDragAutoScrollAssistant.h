@class CADisplayLink, UIView;
@protocol SBHIconDragAutoScrollAssistantDelegate, UIDropSession;

@interface SBHIconDragAutoScrollAssistant : NSObject {
    CADisplayLink *_displayLink;
    double _lastTimestamp;
    BOOL _started;
    struct CGPoint { double x; double y; } _location;
}

@property (weak, nonatomic) id<SBHIconDragAutoScrollAssistantDelegate> delegate;
@property (retain, nonatomic) UIView *referenceView;
@property (retain, nonatomic) id<UIDropSession> activeDropSession;

- (void)_displayLinkFired:(id)a0;
- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (struct CGPoint { double x0; double x1; })_currentLocation;
- (id)initWithDelegate:(id)a0 referenceView:(id)a1;
- (long long)_autoScrollDirectionForLocation:(struct CGPoint { double x0; double x1; })a0;

@end
