@class NSTimeZone, NSString, NSDictionary, NSDate, _DKObject, _DKEventStream;

@interface _DKEvent : _DKObject <_DKProtobufConverting, _DKHasComparableValue, _DKHasPrimaryValue>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain) _DKEventStream *stream;
@property (retain) NSDate *startDate;
@property (retain) NSDate *endDate;
@property (retain) NSTimeZone *timeZone;
@property (retain) _DKObject *value;
@property (copy) NSDictionary *metadata;
@property double confidence;
@property BOOL shouldSync;
@property long long compatibilityVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)entityName;
+ (id)fromPBCodable:(id)a0;
+ (BOOL)supportsSecureCoding;
+ (id)objectFromManagedObject:(id)a0 readMetadata:(BOOL)a1 excludedMetadataKeys:(id)a2 cache:(id)a3;
+ (id)allowedWebpageURLSchemes;
+ (id)eventWithStream:(id)a0 source:(id)a1 startDate:(id)a2 endDate:(id)a3 identifierStringValue:(id)a4 metadata:(id)a5;
+ (id)eventWithStream:(id)a0 startDate:(id)a1 endDate:(id)a2 identifierStringValue:(id)a3 metadata:(id)a4;
+ (id)eventWithStream:(id)a0 startDate:(id)a1 endDate:(id)a2 value:(id)a3 metadata:(id)a4;
+ (id)fromPBCodable:(id)a0 skipMetadata:(BOOL)a1;
+ (id)eventWithStream:(id)a0 startDate:(id)a1 endDate:(id)a2 quantityDoubleValue:(double)a3 metadata:(id)a4;
+ (BOOL)copyMetadata:(id)a0 toManagedObject:(id)a1;
+ (id)eventRepresentingUserActivityWithSearchableItem:(id)a0 bundleIdentifier:(id)a1;
+ (id)eventStreamFromManagedObject:(id)a0 forValue:(id)a1 cache:(id)a2;
+ (id)eventValueFromManagedObject:(id)a0 streamName:(id)a1 readMetadata:(BOOL)a2 excludedMetadataKeys:(id)a3 cache:(id)a4;
+ (id)eventWithInteraction:(id)a0 bundleIdentifier:(id)a1 storeKeyImage:(BOOL)a2;
+ (id)eventWithRelevantShortcut:(id)a0 bundleID:(id)a1;
+ (id)eventWithSearchableItem:(id)a0 bundleIdentifier:(id)a1;
+ (id)eventWithStream:(id)a0 source:(id)a1 startDate:(id)a2 endDate:(id)a3 categoryIntegerValue:(long long)a4 confidence:(double)a5 metadata:(id)a6;
+ (id)eventWithStream:(id)a0 source:(id)a1 startDate:(id)a2 endDate:(id)a3 categoryIntegerValue:(long long)a4 metadata:(id)a5;
+ (id)eventWithStream:(id)a0 source:(id)a1 startDate:(id)a2 endDate:(id)a3 identifierStringValue:(id)a4 confidence:(double)a5 metadata:(id)a6;
+ (id)eventWithStream:(id)a0 source:(id)a1 startDate:(id)a2 endDate:(id)a3 quantityDoubleValue:(double)a4 confidence:(double)a5 metadata:(id)a6;
+ (id)eventWithStream:(id)a0 source:(id)a1 startDate:(id)a2 endDate:(id)a3 quantityDoubleValue:(double)a4 metadata:(id)a5;
+ (id)eventWithStream:(id)a0 source:(id)a1 startDate:(id)a2 endDate:(id)a3 value:(id)a4 confidence:(double)a5 metadata:(id)a6;
+ (id)eventWithStream:(id)a0 startDate:(id)a1 endDate:(id)a2 categoryIntegerValue:(long long)a3 metadata:(id)a4;
+ (id)eventWithStream:(id)a0 startDate:(id)a1 endDate:(id)a2 value:(id)a3;
+ (id)eventWithStream:(id)a0 startDate:(id)a1 endDate:(id)a2 value:(id)a3 confidence:(double)a4 metadata:(id)a5;
+ (id)fetchCustomMetadataWithName:(id)a0 valueHash:(id)a1 context:(id)a2;
+ (BOOL)isValidURL:(id)a0;
+ (id)metadataForInteraction:(id)a0 storeKeyImage:(BOOL)a1;
+ (id)relatedContactIdentifiersFromIntent:(id)a0;
+ (id)uncachedEventValueFromManagedObject:(id)a0 readMetadata:(BOOL)a1 excludedMetadataKeys:(id)a2 cache:(id)a3;

- (id)stringValue;
- (id)primaryValue;
- (id)toPBCodable;
- (void)encodeWithCoder:(id)a0;
- (long long)integerValue;
- (id)initWithCoder:(id)a0;
- (double)doubleValue;
- (id)interaction;
- (BOOL)isEqual:(id)a0;
- (BOOL)copyToManagedObject:(id)a0;
- (long long)compareValue:(id)a0;
- (void).cxx_destruct;
- (BOOL)boolValue;
- (id)toPBCodableUseStructuredMetadata:(BOOL)a0;
- (id)_initWithStream:(id)a0 source:(id)a1 startDate:(id)a2 endDate:(id)a3 value:(id)a4 confidence:(double)a5 metadata:(id)a6;
- (unsigned long long)eventValueClassOf:(id)a0;
- (void)fetchInteractionWithPopulatedKeyImage:(id /* block */)a0;
- (id)initWithStream:(id)a0 source:(id)a1 startDate:(id)a2 endDate:(id)a3 value:(id)a4 confidence:(double)a5 metadata:(id)a6;
- (id)metadataFromCustomMetadata:(id)a0;
- (id)metadataFromCustomMetadata:(id)a0 cache:(id)a1;
- (id)metadataFromStructuredMetadata:(id)a0 excludedMetadataKeys:(id)a1;
- (id)metadataFromStructuredMetadata:(id)a0 excludedMetadataKeys:(id)a1 cache:(id)a2;
- (id)relevantShortcut;

@end
