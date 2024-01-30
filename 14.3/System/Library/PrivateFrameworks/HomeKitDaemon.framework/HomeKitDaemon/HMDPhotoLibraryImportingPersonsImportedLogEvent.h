@class NSUUID;

@interface HMDPhotoLibraryImportingPersonsImportedLogEvent : HMDLogEvent <HMDCoreAnalyticsLogging>

@property (class, readonly, copy) NSUUID *identifier;

@property (readonly) long long totalNumberOfImportedPersons;
@property (readonly) long long numberOfNamedImportedPersons;

- (id)eventName;
- (id)serializedEvent;
- (id)initWithTotalNumberOfImportedPersons:(long long)a0 numberOfNamedImportedPersons:(long long)a1;

@end
