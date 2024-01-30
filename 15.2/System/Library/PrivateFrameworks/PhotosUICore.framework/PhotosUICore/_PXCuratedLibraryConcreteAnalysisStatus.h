@class NSString;

@interface _PXCuratedLibraryConcreteAnalysisStatus : PXCuratedLibraryAnalysisStatus <PXAssetsDataSourceManagerObserver>

@property (readonly, nonatomic) BOOL isDeviceUnplugged;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)hasBattery;
- (long long)_analyzingStateForDataSource:(id)a0;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_configureBatteryMonitoring;
- (void)_batteryStateDidChange:(id)a0;
- (float)_enrichmentProgressForDataSource:(id)a0;
- (void)alternateTitleIndexDidChange;
- (void)_updateStatusProperties;
- (id)initWithDataSourceManager:(id)a0;

@end
