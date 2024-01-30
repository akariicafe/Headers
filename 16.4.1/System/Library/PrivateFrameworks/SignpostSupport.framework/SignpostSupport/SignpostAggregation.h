@class NSString, NSMutableDictionary, NSArray, NSDate, NSDictionary;

@interface SignpostAggregation : NSObject <NSCopying>

@property (retain, nonatomic) NSMutableDictionary *_groupToTypeToDuration;
@property (retain, nonatomic) NSMutableDictionary *_groupToTypeToMinDuration;
@property (retain, nonatomic) NSMutableDictionary *_groupToTypeToMaxDuration;
@property (readonly, nonatomic) NSString *subsystem;
@property (readonly, nonatomic) NSString *category;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *aggregationDescription;
@property (readonly, nonatomic) NSString *signatureString;
@property (readonly, nonatomic) NSArray *rawIntervals;
@property (readonly, nonatomic) BOOL telemetryEnabled;
@property (readonly, nonatomic) unsigned long long durationNs;
@property (readonly, nonatomic) double durationMs;
@property (readonly, nonatomic) double durationSeconds;
@property (readonly, nonatomic) NSDate *earliestDate;
@property (readonly, nonatomic) NSDate *latestDate;
@property (readonly, nonatomic) NSDictionary *groupNameToGroupDict;

+ (id)_aggregationDescriptionStringForInterval:(id)a0;
+ (id)_signatureForSubsystem:(id)a0 category:(id)a1 name:(id)a2 aggregationDescription:(id)a3;
+ (id)_timeRangeDictForInterval:(id)a0;
+ (id)sumOfAggregation1:(id)a0 aggregation2:(id)a1 errorOut:(id *)a2;

- (id)_dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)addAggregation:(id)a0;
- (id)_telemetryEnabledGroupDurations;
- (id)_canAdd:(id)a0;
- (void)_checkGroupTypeTuplesForPlaceholderType:(unsigned char)a0 errors:(id)a1;
- (id)_coreAnalyticsEventName;
- (id)_coreAnalyticsEventPayloadDictionary;
- (void)_fixupGroupsAndDurationsWithErrors:(id)a0;
- (id)_handleCountSegment:(id)a0;
- (id)_handleDurationSegment:(id)a0 placeholderType:(unsigned char)a1;
- (id)_handleMaxDurationSegment:(id)a0;
- (id)_handleMinDurationSegment:(id)a0;
- (id)_handleTotalDurationSegment:(id)a0;
- (id)_initWithSubsystem:(id)a0 category:(id)a1 name:(id)a2 rawIntervals:(id)a3 durationNs:(unsigned long long)a4;
- (id)_processDescription:(id)a0;
- (id)_processInterval:(id)a0;
- (id)_processMetadataSegment:(id)a0;
- (void)_sortRawIntervals;
- (id)_telemetryEnabledGroups;
- (id)_updateDict:(id)a0 withGroup:(id)a1 type:(id)a2 durationNs:(id)a3 namespaceType:(id)a4;
- (void)dropRawIntervals;
- (id)initWithInterval:(id)a0 errorsOut:(id *)a1;
- (id)jsonDescription:(unsigned long long)a0;

@end
