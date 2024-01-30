@class NSDateComponentsFormatter, DKCloudUploadResults;

@interface DKCloudUploadViewController : OBSetupAssistantProgressController

@property (retain, nonatomic) NSDateComponentsFormatter *durationFormatter;
@property (nonatomic) DKCloudUploadResults *uploadResults;
@property (nonatomic) BOOL showUploadFailureAlert;
@property (copy, nonatomic) id /* block */ cancelBlock;
@property (copy, nonatomic) id /* block */ skipBlock;

- (void)setProgress:(double)a0;
- (void)viewDidLoad;
- (id)init;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)_cancelTapped:(id)a0;
- (void)_skipTapped:(id)a0;
- (void)_showUploadFailureAlertForResults:(id)a0;
- (id)_timeRemainingString:(double)a0;
- (void)uploadDidComplete:(id)a0;
- (void)uploadProgress:(float)a0 withTimeRemaining:(double)a1;

@end
