@class UIButton;
@protocol CKInlineAudioReplyButtonDelegate;

@interface CKInlineAudioReplyButtonController : NSObject

@property (retain, nonatomic) UIButton *startButton;
@property (retain, nonatomic) UIButton *stopButton;
@property (nonatomic) double holdThreshold;
@property (nonatomic) double touchDownTime;
@property (nonatomic, getter=isStarted) BOOL started;
@property (weak, nonatomic) id<CKInlineAudioReplyButtonDelegate> delegate;

- (void).cxx_destruct;
- (void)touchDownInStartButton:(id)a0 event:(id)a1;
- (void)touchUpInStartButton:(id)a0 event:(id)a1;
- (void)touchUpOutsideStartButton:(id)a0 event:(id)a1;
- (void)touchUpInStopButton:(id)a0;
- (void)touchDragEnter:(id)a0;
- (void)touchDragExit:(id)a0;
- (void)dealloc;
- (id)initWithStartButton:(id)a0 stopButton:(id)a1;

@end
