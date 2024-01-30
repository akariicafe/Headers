@class VNImageprint, NSString, NSData;

@interface VNImageprintObservation : VNObservation

@property (retain, nonatomic) VNImageprint *imageprint;
@property (readonly, nonatomic) BOOL imageprintValid;
@property (readonly, copy, nonatomic) NSString *imageprintVersion;
@property (readonly, nonatomic) NSData *rawImageprintDescriptor;

+ (BOOL)supportsSecureCoding;
+ (id)defaultOriginatingRequestClassNameForRequestRevision:(unsigned long long)a0;
+ (id)observationWithImageprint:(id)a0 error:(id *)a1;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)vn_cloneObject;
- (float)calculateDistanceFromImageprintObservation:(id)a0;
- (BOOL)isImageprintValid;
- (id)initWithRawImageprintDescriptor:(id)a0;

@end
