@class NSTimeZone, NSString, GEOCacheInvalidationData, GEOMapItemIdentifier, NSArray, NSDateInterval;

@interface GEOPOIEvent : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) GEOCacheInvalidationData *invalidationData;
@property (retain, nonatomic) GEOMapItemIdentifier *identifier;
@property (retain, nonatomic) NSString *localizedName;
@property (nonatomic) struct { double latitude; double longitude; } centerCoordinate;
@property (nonatomic) long long expectedAttendance;
@property (retain, nonatomic) NSArray *categories;
@property (retain, nonatomic) NSArray *relatedPOIIdentifiers;
@property (retain, nonatomic) NSDateInterval *dateInterval;
@property (retain, nonatomic) NSTimeZone *timeZone;
@property (retain, nonatomic) NSArray *hours;
@property (retain, nonatomic) NSArray *performers;
@property (readonly, nonatomic, getter=isUpdateRequired) BOOL updateRequired;

+ (BOOL)isUpdateRequiredForInvalidationData:(id)a0;
+ (BOOL)isUpdateRequiredForInvalidationToken:(id)a0 error:(id *)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPlace:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)dateIntervalFromDateTimeRanges:(id)a0;
- (BOOL)configureWithComponents:(id)a0;
- (BOOL)configureWithPOIComponent:(id)a0;
- (BOOL)configureWithPlaceInfoComponent:(id)a0;
- (void)geoPOIEventCommonInit;
- (id)initWithMapItemIdentifier:(id)a0;
- (id)invalidationToken;

@end
