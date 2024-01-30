@class NSString, NSNumber, NSDate;

@interface CMOdometerData : NSObject <SRSampling, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) NSNumber *distance;
@property (readonly, nonatomic) NSNumber *currentSpeed;
@property (readonly, nonatomic) NSNumber *averageSpeed;

- (id)initWithDistance:(id)a0 startDate:(id)a1 endDate:(id)a2 currentSpeed:(id)a3 averageSpeed:(id)a4;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)binarySampleRepresentation;
- (id)initWithBinarySampleRepresentation:(id)a0 metadata:(id)a1 timestamp:(double)a2;
- (void)encodeWithCoder:(id)a0;

@end
