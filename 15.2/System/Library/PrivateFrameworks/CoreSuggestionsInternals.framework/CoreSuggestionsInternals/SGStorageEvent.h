@class NSData, NSString, SGRecordId, SGSimpleTimeRange, NSArray, NSSet, SGDuplicateKey;

@interface SGStorageEvent : NSObject <SGEventForGeocode>

@property (readonly, nonatomic) SGRecordId *recordId;
@property (readonly, nonatomic) SGDuplicateKey *duplicateKey;
@property (readonly, nonatomic) NSString *sourceKey;
@property (readonly, nonatomic) NSString *content;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) struct SGUnixTimestamp_ { double secondsFromUnixEpoch; } creationTimestamp;
@property (readonly, nonatomic) struct SGUnixTimestamp_ { double secondsFromUnixEpoch; } lastModifiedTimestamp;
@property (readonly, nonatomic) SGSimpleTimeRange *when;
@property (readonly, nonatomic) NSArray *locations;
@property (readonly, nonatomic) NSSet *tags;
@property (readonly, nonatomic) NSData *structuredData;
@property (readonly, nonatomic) unsigned int state;
@property (readonly, nonatomic) BOOL curated;
@property (readonly, nonatomic) NSString *opaqueKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)storageEventFromEntity:(id)a0;

- (id)loggingIdentifier;
- (BOOL)isAllDay;
- (id)geocodeLocations;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)geocodeEndDate;
- (id)geocodeStartDate;
- (BOOL)isCancelled;
- (id)poiFilters;
- (unsigned long long)geocodingMode;
- (id)geocodedEventWithStartDate:(id)a0 startTimeZone:(id)a1 endDate:(id)a2 endTimeZone:(id)a3 locations:(id)a4;
- (id)geocodeStartTimeZone;
- (id)geocodeEndTimeZone;
- (id)extraKeyTag;
- (id)fieldsToSaveOnConfirmation;
- (id)urlFromTags;
- (id)convertToEventWithOrigin:(id)a0;
- (id)convertToEvent:(id)a0;
- (id)initWithRecordId:(id)a0 duplicateKey:(id)a1 sourceKey:(id)a2 content:(id)a3 title:(id)a4 creationTimestamp:(struct SGUnixTimestamp_ { double x0; })a5 lastModifiedTimestamp:(struct SGUnixTimestamp_ { double x0; })a6 tags:(id)a7 when:(id)a8 locations:(id)a9 structuredData:(id)a10 state:(unsigned int)a11 curated:(BOOL)a12;
- (BOOL)isFromDataDetectors;
- (BOOL)isFromSuggestions;
- (BOOL)isEqualToStorageEvent:(id)a0;

@end
