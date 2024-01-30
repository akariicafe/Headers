@class UISelectionFeedbackGenerator;

@interface CEKSelectionFeedbackGenerator : NSObject

@property (readonly, nonatomic) UISelectionFeedbackGenerator *_feedbackGenerator;
@property (readonly, nonatomic) unsigned int _endStopSoundID;
@property (readonly, nonatomic) unsigned int _majorTickSoundID;
@property (readonly, nonatomic) unsigned int _minorTickSoundID;
@property (readonly, nonatomic) unsigned int _overscrollTickSoundID;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)prepareFeedback;
- (void)performFeedback;
- (void)playMinorTickSound;
- (void)playMajorTickSound;
- (void)playEndTickSound;
- (void)playOverscrollTickSound;

@end
