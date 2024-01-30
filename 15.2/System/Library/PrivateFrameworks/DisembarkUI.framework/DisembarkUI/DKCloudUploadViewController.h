@class NSDateComponentsFormatter;

@interface DKCloudUploadViewController : OBSetupAssistantProgressController

@property (retain, nonatomic) NSDateComponentsFormatter *durationFormatter;
@property (nonatomic) unsigned long long uploadResult;
@property (nonatomic) BOOL showUploadFailureAlert;
@property (copy, nonatomic) id /* block */ cancelBlock;
@property (copy, nonatomic) id /* block */ skipBlock;

- (void)viewDidLoad;
- (void)setProgress:(double)a0;
- (void).cxx_destruct;
- (id)init;
- (void)viewDidAppear:(BOOL)a0;
- (void)_cancelTapped:(id)a0;
- (void)_skipTapped:(id)a0;
- (void)_showUploadFailureAlertForResult:(unsigned long long)a0;
- (id)_timeRemainingString:(double)a0;
- (void)uploadProgress:(float)a0 withTimeRemaining:(double)a1;
- (void)uploadDidComplete:(unsigned long long)a0;

@end
