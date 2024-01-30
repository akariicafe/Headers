@class NSString;

@interface _DKQuery : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *clientName;
@property (copy) id /* block */ tracker;
@property (nonatomic) BOOL executeConcurrently;

+ (id)predicateForEventsWithSourceID:(id)a0;
+ (id)endDateSortDescriptorAscending:(BOOL)a0;
+ (id)predicateForEventsWithBundleID:(id)a0;
+ (id)creationDateSortDescriptorAscending:(BOOL)a0;
+ (id)executableQueryForQuery:(id)a0;
+ (id)localCreationDateSortDescriptorAscending:(BOOL)a0;
+ (id)predicateForEventsBetweenStartDate:(id)a0 endDate:(id)a1;
+ (id)predicateForEventsBetweenStartSecondOfDay:(unsigned long long)a0 endSecondOfDay:(unsigned long long)a1;
+ (id)predicateForEventsContainingDateRangeFrom:(id)a0 to:(id)a1;
+ (id)predicateForEventsExcludingIntegerValue:(long long)a0;
+ (id)predicateForEventsIntersectingDateRangeFrom:(id)a0 to:(id)a1;
+ (id)predicateForEventsWithCategoryValue:(id)a0;
+ (id)predicateForEventsWithCreationInDateRangeFrom:(id)a0 toBefore:(id)a1;
+ (id)predicateForEventsWithCreationInDateRangeFromAfter:(id)a0 to:(id)a1;
+ (id)predicateForEventsWithDayOfWeek:(unsigned long long)a0;
+ (id)predicateForEventsWithDoubleValue:(double)a0;
+ (id)predicateForEventsWithDoubleValueBetween:(double)a0 and:(double)a1;
+ (id)predicateForEventsWithEndInDateRangeFrom:(id)a0 to:(id)a1;
+ (id)predicateForEventsWithIdentifierValue:(id)a0;
+ (id)predicateForEventsWithIntegerValue:(long long)a0;
+ (id)predicateForEventsWithLocalCreationInDateRangeFrom:(id)a0 toBefore:(id)a1;
+ (id)predicateForEventsWithLocalCreationInDateRangeFromAfter:(id)a0 to:(id)a1;
+ (id)predicateForEventsWithMinimumDuration:(double)a0;
+ (id)predicateForEventsWithMinumumDuration:(double)a0;
+ (id)predicateForEventsWithNoSource;
+ (id)predicateForEventsWithNullSourceDeviceID;
+ (id)predicateForEventsWithQuantityValue:(id)a0;
+ (id)predicateForEventsWithSourceDeviceIDs:(id)a0;
+ (id)predicateForEventsWithSourceGroupIDs:(id)a0;
+ (id)predicateForEventsWithSourceID:(id)a0 bundleID:(id)a1;
+ (id)predicateForEventsWithSourceID:(id)a0 bundleID:(id)a1 groupIDs:(id)a2;
+ (id)predicateForEventsWithSourceID:(id)a0 bundleID:(id)a1 itemIDs:(id)a2;
+ (id)predicateForEventsWithStartAndEndInDateRangeFrom:(id)a0 to:(id)a1;
+ (id)predicateForEventsWithStartDateAfter:(id)a0;
+ (id)predicateForEventsWithStartDateOrCreationDateBefore:(id)a0;
+ (id)predicateForEventsWithStartInDateRangeFrom:(id)a0 to:(id)a1;
+ (id)predicateForEventsWithStartInDateRangeFromAfter:(id)a0 to:(id)a1;
+ (id)predicateForEventsWithStartOrEndInDateRangeWithFrom:(id)a0 to:(id)a1;
+ (id)predicateForEventsWithStreamName:(id)a0;
+ (id)predicateForEventsWithStreamNames:(id)a0;
+ (id)predicateForEventsWithStringValue:(id)a0;
+ (id)predicateForEventsWithStringValueInValues:(id)a0;
+ (id)predicateForObjectWithUUID:(id)a0;
+ (id)predicateForObjectsWithMetadataKey:(id)a0;
+ (id)predicateForObjectsWithMetadataKey:(id)a0 andDoubleValue:(double)a1;
+ (id)predicateForObjectsWithMetadataKey:(id)a0 andDoubleValueBetween:(double)a1 andValue:(double)a2;
+ (id)predicateForObjectsWithMetadataKey:(id)a0 andIntegerValue:(long long)a1;
+ (id)predicateForObjectsWithMetadataKey:(id)a0 andStringValue:(id)a1;
+ (id)predicateForObjectsWithMetadataKey:(id)a0 andValue:(id)a1;
+ (id)predicateForObjectsWithMetadataKey:(id)a0 inValues:(id)a1;
+ (id)predicateForObjectsWithMetadataKey:(id)a0 likeStringValue:(id)a1;
+ (id)predicateForObjectsWithUUIDs:(id)a0;
+ (id)queryNotExecutableError;
+ (id)startDateSortDescriptorAscending:(BOOL)a0;
+ (id)structuredMetadataKeyPathForMetadataKey:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
