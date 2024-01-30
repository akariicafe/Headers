@interface MSVAutoBugCapture : NSObject

+ (BOOL)_isReporterEnabled;
+ (void)snapshotWithDomain:(id)a0 type:(id)a1 subType:(id)a2 context:(id)a3 triggerThresholdValues:(id)a4 events:(id)a5 completion:(id /* block */)a6;

@end
