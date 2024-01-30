@protocol ASVFeedbackGenerator;

@interface ASVGestureFeedbackGenerator : NSObject

@property (retain, nonatomic) id<ASVFeedbackGenerator> snapToScaleFeedbackGenerator;
@property (retain, nonatomic) id<ASVFeedbackGenerator> snapAwayFromScaleFeedbackGenerator;

- (void)prepare;
- (void).cxx_destruct;
- (id)initWithSnapToGenerator:(id)a0 snapAwayFromGenerator:(id)a1;

@end
