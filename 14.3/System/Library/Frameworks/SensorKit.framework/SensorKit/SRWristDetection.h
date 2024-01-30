@class NSString;

@interface SRWristDetection : NSObject <SRSampling, SRSampleExporting>

@property (nonatomic) unsigned char wristDetectionRawValue;
@property (readonly) BOOL onWrist;
@property (readonly) long long wristLocation;
@property (readonly) long long crownOrientation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (id)initWithBinarySampleRepresentation:(id)a0 metadata:(id)a1 timestamp:(double)a2;
- (id)sr_dictionaryRepresentation;

@end
