@class NSString, NSMeasurement;

@interface SRAmbientLightSample : NSObject <SRSampleExporting, NSSecureCoding, SRSampling> {
    long long _type;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *typeString;
@property (readonly, copy) NSString *placementString;
@property (readonly) long long placement;
@property (readonly) struct { float x; float y; } chromaticity;
@property (readonly, copy) NSMeasurement *lux;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)binarySampleRepresentation;
- (id)initWithBinarySampleRepresentation:(id)a0 metadata:(id)a1 timestamp:(double)a2;
- (id)sr_dictionaryRepresentation;
- (id)initWithSRALSSampleStruct:(struct { long long x0; long long x1; float x2; struct { float x0; float x1; } x3; } *)a0;

@end
