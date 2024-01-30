@class HFAccessoryDiagnosticItem;

@interface HUSendDiagnosticsToManufacturerActivity : UIActivity

@property (retain, nonatomic) HFAccessoryDiagnosticItem *diagnosticItem;

- (id)activityType;
- (void).cxx_destruct;
- (id)activityViewController;
- (void)prepareWithActivityItems:(id)a0;
- (id)activityTitle;
- (id)activityImage;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (id)initWithDiagnosticItem:(id)a0;

@end
