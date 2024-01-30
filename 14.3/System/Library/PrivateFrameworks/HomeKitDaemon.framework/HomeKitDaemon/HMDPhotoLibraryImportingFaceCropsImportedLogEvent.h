@class NSUUID;

@interface HMDPhotoLibraryImportingFaceCropsImportedLogEvent : HMDLogEvent <HMDCoreAnalyticsLogging>

@property (class, readonly, copy) NSUUID *identifier;

@property (readonly) long long numberOfImportedFaceCrops;

- (id)eventName;
- (id)serializedEvent;
- (id)initWithNumberOfImportedFaceCrops:(long long)a0;

@end
