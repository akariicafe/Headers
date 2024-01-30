@class NSNumber, NSObject, ENExposureConfiguration;
@protocol OS_os_transaction;

@interface ENExposureCalculationSession : NSObject {
    NSObject<OS_os_transaction> *_transaction;
    unsigned char _attenuationDurationThresholds[4];
    unsigned int _scanInstanceBufferSize;
    struct { unsigned int x0; long long x1; unsigned char x2; unsigned char x3; unsigned char x4; } *_exposureWindowMetadataBuffer;
    unsigned int _cachedExposureWindowMetadataCount;
    struct { unsigned int x0; double x1; unsigned char x2; unsigned char x3; unsigned short x4; } *_scanInstanceBuffer;
    unsigned int _cachedScanInstanceCount;
}

@property (readonly, nonatomic) unsigned int droppedScanInstanceCount;
@property (nonatomic) BOOL allowRecursiveReportType;
@property (copy, nonatomic) ENExposureConfiguration *exposureConfiguration;
@property (copy, nonatomic) NSNumber *allowedRPIBroadcastDuration;
@property (copy, nonatomic) NSNumber *advertisementSampleCountThreshold;
@property (nonatomic) BOOL cacheExposureInfo;
@property (readonly, nonatomic) unsigned long long cachedExposureInfoCount;
@property (nonatomic) BOOL cacheExposureWindows;
@property (readonly, nonatomic) unsigned long long cachedExposureWindowCount;

- (void).cxx_destruct;
- (void)dealloc;
- (id)exposureInfoForMatchedAdvertisements:(id)a0 key:(id)a1;
- (id)cachedExposuresDifferentialPrivacyRiskParameters;
- (void)enumerateCachedExposureInfo:(id /* block */)a0;
- (id)initWithAttenuationThreshold:(unsigned char)a0 capacity:(unsigned int)a1;
- (void)enumerateCachedExposureWindows:(id /* block */)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 withBatchSize:(unsigned int)a2;
- (unsigned char)weightedAttenuationValueForDurations:(unsigned int *)a0;
- (id)exposureWindowsForMatchedAdvertisements:(id)a0 key:(id)a1 options:(long long)a2;
- (id)exposureInfoForExposureWindows:(id)a0 key:(id)a1;
- (void)enumerateCachedExposureInfo:(id /* block */)a0 withBatchSize:(unsigned int)a1;
- (void)enumerateCachedExposureInfo:(id /* block */)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 withBatchSize:(unsigned int)a2;
- (BOOL)_shouldMatchKey:(id)a0;
- (id)filterAdvertisements:(id)a0 fromKey:(id)a1;
- (struct { unsigned int x0; double x1; unsigned char x2; unsigned char x3; unsigned short x4; })scanInstanceFromAdvertisement:(id)a0 key:(id)a1;
- (void)enumerateCachedExposureWindows:(id /* block */)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 withBatchSize:(unsigned int)a2 options:(long long)a3;
- (id)groupExposureWindowsByDay:(id)a0;
- (id)groupExposureWindowsByInfectiousness:(id)a0;
- (id)attenuationDurationMapDataForExposureWindows:(id)a0;
- (id)exposureWindowsForMatchedAdvertisements:(id)a0 key:(id)a1;

@end
