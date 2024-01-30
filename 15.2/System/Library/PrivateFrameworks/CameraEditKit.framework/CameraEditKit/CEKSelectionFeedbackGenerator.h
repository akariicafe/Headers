@class UISelectionFeedbackGenerator;

@interface CEKSelectionFeedbackGenerator : NSObject

@property (readonly, nonatomic) UISelectionFeedbackGenerator *_feedbackGenerator;
@property (readonly, nonatomic) unsigned int _endStopSoundID;
@property (readonly, nonatomic) unsigned int _majorTickSoundID;
@property (readonly, nonatomic) unsigned int _minorTickSoundID;
@property (readonly, nonatomic) unsigned int _overscrollTickSoundID;

- (void)prepareFeedback;
- (void)performFeedback;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)playMinorTickSound;
- (void)playMajorTickSound;
- (void)playEndTickSound;
- (void)playOverscrollTickSound;

@end
