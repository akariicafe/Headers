@class VNImageprint, NSString, NSData;

@interface VNImageprintObservation : VNObservation

@property (retain, nonatomic) VNImageprint *imageprint;
@property (readonly, nonatomic) BOOL imageprintValid;
@property (readonly, copy, nonatomic) NSString *imageprintVersion;
@property (readonly, nonatomic) NSData *rawImageprintDescriptor;

+ (BOOL)supportsSecureCoding;
+ (id)observationWithImageprint:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (float)calculateDistanceFromImageprintObservation:(id)a0;
- (BOOL)isImageprintValid;
- (id)initWithRawImageprintDescriptor:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
