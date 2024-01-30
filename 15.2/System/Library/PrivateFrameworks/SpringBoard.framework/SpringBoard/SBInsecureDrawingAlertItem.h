@class NSString, NSSet;

@interface SBInsecureDrawingAlertItem : SBDiagnosticRequestAlertItem

@property (copy, nonatomic) NSString *processName;
@property (copy, nonatomic) NSSet *layerNames;

- (id)message;
- (id)title;
- (id)radarTitle;
- (BOOL)shouldShowInLockScreen;
- (id)_buildVersion;
- (void).cxx_destruct;
- (id)radarDescription;
- (long long)radarClassification;
- (BOOL)ignoreIfAlreadyDisplaying;
- (long long)radarReproducibility;

@end
