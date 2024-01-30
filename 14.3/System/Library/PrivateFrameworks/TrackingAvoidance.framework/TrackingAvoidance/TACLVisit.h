@class NSString, NSDate;

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
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descriptionDictionary;
- (void)encodeWithOSLogCoder:(id)a0 options:(unsigned long long)a1 maxLength:(unsigned long long)a2;
- (id)getDate;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 horizontalAccuracy:(double)a1 arrivalDate:(id)a2 departureDate:(id)a3 detectionDate:(id)a4 confidence:(unsigned long long)a5;

@end
