@class UITextView, NSString, CADisplayLink, NSMutableArray;

@interface _UICharacterStreamingManager : NSObject {
    UITextView *_textView;
    CADisplayLink *_streamingAnimationDisplayLink;
    BOOL _streamingAnimationActive;
    double _lastAnimationUpdateTimeStamp;
    BOOL _committingFinalResults;
}

@property (copy, nonatomic) NSString *previousHypothesis;
@property (copy, nonatomic) NSString *lastHypothesis;
@property (copy, nonatomic) NSString *targetHypothesis;
@property (retain, nonatomic) NSMutableArray *pendingEdits;
@property (nonatomic) double streamingCharacterInsertionRate;
@property (nonatomic) double minDurationBetweenHypotheses;
@property (nonatomic) BOOL discardNextHypothesis;

- (void)_displayLinkFired:(id)a0;
- (void)_startStreamingAnimations;
- (void)setWords:(id)a0;
- (void)_stopStreamingAnimation;
- (void).cxx_destruct;
- (id)initWithTextView:(id)a0;
- (void)setupToInsertResultForNewHypothesis:(id)a0;
- (void)commitFinalResults;

@end
