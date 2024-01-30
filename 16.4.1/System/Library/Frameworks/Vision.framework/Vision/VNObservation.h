@class NSUUID, NSPointerArray, VNRequestSpecifier;

@interface VNObservation : NSObject <VNEntityIdentificationModelObservation, VNObjectCloning, VNOriginatingRequestSpecifierProviding, NSCopying, NSSecureCoding, VNRequestRevisionProviding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic, setter=setUUID:) NSUUID *uuid;
@property (nonatomic) float confidence;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } timeRange;
@property (retain, nonatomic) NSPointerArray *requestImageBuffers;
@property (retain, nonatomic) NSPointerArray *requestImageBuffersCacheKeys;
@property (readonly) VNRequestSpecifier *originatingRequestSpecifier;
@property (readonly, nonatomic) unsigned long long requestRevision;

+ (id)defaultOriginatingRequestClassNameForRequestRevision:(unsigned long long)a0;
+ (id)defaultOriginatingRequestSpecifierForRevision:(unsigned long long)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)debugQuickLookObject;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)VNEntityIdentificationModelPrintWithOriginatingRequestSpecifier:(id)a0 error:(id *)a1;
- (id)getDataDetectorResults:(id *)a0;
- (id)getDataDetectorResultsForString:(id)a0 error:(id *)a1;
- (id)initWithOriginatingRequestSpecifier:(id)a0;
- (id)initWithRequestRevision:(unsigned long long)a0;
- (id)observationWithOriginatingRequestSpecifier:(id)a0;
- (id)vn_cloneObject;

@end
