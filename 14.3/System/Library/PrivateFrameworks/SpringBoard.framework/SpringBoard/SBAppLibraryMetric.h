@class NSString, PETScalarEventTracker;

@interface SBAppLibraryMetric : NSObject <SBFAnalyticsBackendEventHandling> {
    PETScalarEventTracker *_appDownloadSettingsTracker;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (BOOL)handleEvent:(unsigned long long)a0 withContext:(id)a1;

@end
