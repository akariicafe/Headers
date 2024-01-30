@class NSString, NSUUID, NSDateInterval;

@interface SRVisit : NSObject <SRSampleExporting, NSSecureCoding, SRSampling>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *label;
@property (readonly) double distanceFromHome;
@property (readonly) NSDateInterval *arrivalDateInterval;
@property (readonly) NSDateInterval *departureDateInterval;
@property (readonly) long long locationCategory;
@property (readonly) NSUUID *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)binarySampleRepresentation;
- (id)initWithBinarySampleRepresentation:(id)a0 metadata:(id)a1 timestamp:(double)a2;
- (id)sr_dictionaryRepresentation;
- (id)initWithDistanceFromHome:(double)a0 arrive:(id)a1 depart:(id)a2 category:(long long)a3 uuid:(id)a4;

@end
