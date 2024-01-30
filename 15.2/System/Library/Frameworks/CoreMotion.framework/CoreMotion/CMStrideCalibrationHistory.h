@class NSString, NSArray;

@interface CMStrideCalibrationHistory : NSObject <SRSampling, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSArray *calibrationTracks;
@property (retain, nonatomic) NSArray *rawSpeedToKValueBins;
@property (retain, nonatomic) NSArray *stepCadenceToStrideLengthBins;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithBinarySampleRepresentation:(id)a0 metadata:(id)a1 timestamp:(double)a2;
- (id)binarySampleRepresentation;
- (id)initWithCalibrationTracks:(id)a0 rawSpeedToKValueBins:(id)a1 stepCadenceToStrideLengthBins:(id)a2;

@end
