@class TSWPHyperlinkField, TSDRep, TSDInteractiveCanvasController;
@protocol TSWPHyperlinkHostRepProtocol;

@interface TSAHyperlinkGestureRecognizer : UIGestureRecognizer {
    struct CGPoint { double x; double y; } _touchBeginPoint;
}

@property (retain, nonatomic) TSWPHyperlinkField *hitField;
@property (retain, nonatomic) TSDRep<TSWPHyperlinkHostRepProtocol> *hitRep;
@property (nonatomic) BOOL tapEnabled;
@property (nonatomic) BOOL tapHoldEnabled;
@property (readonly, nonatomic) BOOL wasTapHold;
@property (nonatomic) TSDInteractiveCanvasController *icc;

- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)reset;
- (void)dealloc;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)setState:(long long)a0;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)setEnabled:(BOOL)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (id)p_smartFieldForTouch:(id)a0 outRep:(id *)a1;
- (void)p_delayElapsed:(id)a0;

@end
