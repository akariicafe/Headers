@class HFAccessoryDiagnosticItem;

@interface HUSendDiagnosticsToManufacturerActivity : UIActivity

@property (retain, nonatomic) HFAccessoryDiagnosticItem *diagnosticItem;

- (id)activityType;
- (id)activityViewController;
- (void).cxx_destruct;
- (void)prepareWithActivityItems:(id)a0;
- (id)activityImage;
- (id)activityTitle;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (id)initWithDiagnosticItem:(id)a0;

@end
