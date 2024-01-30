@class NSString, NSDate;

@interface SRWristDetection : NSObject <SRSampleExporting, NSSecureCoding, SRSampling>

@property (class, readonly) BOOL supportsSecureCoding;

@property BOOL onWrist;
@property long long wristLocation;
@property long long crownOrientation;
@property double cfOnWristDate;
@property double cfOffWristDate;
@property (readonly) NSDate *onWristDate;
@property (readonly) NSDate *offWristDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)binarySampleRepresentation;
- (id)initWithBinarySampleRepresentation:(id)a0 metadata:(id)a1 timestamp:(double)a2;
- (id)sr_dictionaryRepresentation;
- (id)_offWristDate;
- (id)_onWristDate;
- (id)initWithCFOnWristDate:(double)a0 CFOffWristDate:(double)a1 onWrist:(BOOL)a2 wristLocation:(long long)a3 crownOrientation:(long long)a4;
- (id)initWithOnWristDate:(id)a0 offWristDate:(id)a1 onWrist:(BOOL)a2 wristLocation:(long long)a3 crownOrientation:(long long)a4;

@end
