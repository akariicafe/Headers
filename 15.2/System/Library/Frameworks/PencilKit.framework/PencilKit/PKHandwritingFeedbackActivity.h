@class NSString, UIImage;

@interface PKHandwritingFeedbackActivity : UIActivity

@property (copy, nonatomic) id /* block */ block;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) UIImage *image;

- (id)activityType;
- (id)initWithBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)activityImage;
- (id)activityTitle;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (void)performActivity;

@end
