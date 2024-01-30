@class UISelectionFeedbackGenerator;

@interface CEKSelectionFeedbackGenerator : NSObject

@property (readonly, nonatomic) UISelectionFeedbackGenerator *_feedbackGenerator;
@property (readonly, nonatomic) unsigned int _endStopSoundID;
@property (readonly, nonatomic) unsigned int _majorTickSoundID;
@property (readonly, nonatomic) unsigned int _minorTickSoundID;
@property (readonly, nonatomic) unsigned int _overscrollTickSoundID;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)prepareFeedback;
- (void)performFeedback;
- (void)playEndTickSound;
- (void)playMajorTickSound;
- (void)playMinorTickSound;
- (void)playOverscrollTickSound;

@end
