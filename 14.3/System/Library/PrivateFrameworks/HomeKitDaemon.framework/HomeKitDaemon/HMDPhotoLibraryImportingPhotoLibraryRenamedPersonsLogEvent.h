@class NSUUID;

@interface HMDPhotoLibraryImportingPhotoLibraryRenamedPersonsLogEvent : HMDLogEvent <HMDCoreAnalyticsLogging>

@property (class, readonly, copy) NSUUID *identifier;

@property (readonly) long long numberOfRenamedPersons;

- (id)eventName;
- (id)serializedEvent;
- (id)initWithNumberOfRenamedPersons:(long long)a0;

@end
