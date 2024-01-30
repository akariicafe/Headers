@class NSDateInterval, NSString, NSDate;

@interface TACLVisit : NSObject <OSLogCoding, TAEventProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDate *arrivalDate;
@property (readonly, copy, nonatomic) NSDate *departureDate;
@property (readonly, nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } coordinate;
@property (readonly, nonatomic) double horizontalAccuracy;
@property (readonly, nonatomic) BOOL hasArrivalDate;
@property (readonly, nonatomic) BOOL hasDepartureDate;
@property (readonly, nonatomic) BOOL isTemporalOrderSensical;
@property (readonly, copy, nonatomic) NSDate *detectionDate;
@property (readonly, nonatomic) unsigned long long confidence;
@property (readonly, nonatomic) NSDateInterval *dateInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithOSLogCoder:(id)a0 options:(unsigned long long)a1 maxLength:(unsigned long long)a2;
- (id)initWithCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 horizontalAccuracy:(double)a1 arrivalDate:(id)a2 departureDate:(id)a3 detectionDate:(id)a4 confidence:(unsigned long long)a5;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)descriptionDictionary;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)getDate;
- (void).cxx_destruct;

@end
