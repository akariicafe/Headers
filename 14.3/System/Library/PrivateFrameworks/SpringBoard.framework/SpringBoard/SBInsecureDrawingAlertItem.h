@class NSString, NSSet;

@interface SBInsecureDrawingAlertItem : SBDiagnosticRequestAlertItem

@property (copy, nonatomic) NSString *processName;
@property (copy, nonatomic) NSSet *layerNames;

- (long long)radarClassification;
- (void).cxx_destruct;
- (id)radarDescription;
- (id)radarTitle;
- (BOOL)shouldShowInLockScreen;
- (id)_buildVersion;
- (id)message;
- (id)title;
- (BOOL)ignoreIfAlreadyDisplaying;
- (long long)radarReproducibility;

@end
