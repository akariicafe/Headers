@class NSArray, NSMutableArray;
@protocol PKTextInputDebugReplayViewDelegate;

@interface PKTextInputDebugReplayView : UIView {
    struct CGContext { } *_bitmapContext;
    double _drawScale;
}

@property (nonatomic) long long replayState;
@property (retain, nonatomic) NSMutableArray *playbackStrokes;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } playbackBounds;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } _bitmapBounds;
@property (nonatomic) unsigned long long playbackLogIndex;
@property (weak, nonatomic) id<PKTextInputDebugReplayViewDelegate> delegate;
@property (retain, nonatomic) NSArray *currentLogEntries;
@property (readonly, nonatomic) BOOL hasReplayedLoggedEntries;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_advanceReplay;
- (void)_teardownContextIfNecessary;
- (void)_restartReplayState;
- (double)_timestampDeltaBeforeNextLogAfterIndex:(unsigned long long)a0;
- (void)drawStroke:(id)a0;
- (void)_scheduleTimerForReplay;
- (void)_createReplayContextIfNecessary;
- (void)_togglePlayPauseReplayingLoggedEntries;

@end
