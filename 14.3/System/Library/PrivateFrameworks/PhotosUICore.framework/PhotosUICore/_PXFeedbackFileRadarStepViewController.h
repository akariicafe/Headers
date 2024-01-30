@class NSString;

@interface _PXFeedbackFileRadarStepViewController : UIViewController

@property (copy, nonatomic) NSString *messageTitle;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *buttonTitle;
@property (copy, nonatomic) id /* block */ buttonActionHandler;

- (void).cxx_destruct;
- (void)viewDidLoad;

@end
