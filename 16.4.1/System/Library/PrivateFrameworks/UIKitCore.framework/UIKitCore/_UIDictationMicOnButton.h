@class CAShapeLayer;

@interface _UIDictationMicOnButton : UIButton

@property (retain, nonatomic) CAShapeLayer *shapeLayer;

- (void)layoutSubviews;
- (void)didMoveToSuperview;
- (void).cxx_destruct;
- (void)setupShapeLayer;

@end
