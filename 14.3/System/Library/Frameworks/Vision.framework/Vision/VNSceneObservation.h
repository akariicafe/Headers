@class NSArray, NSString;

@interface VNSceneObservation : VNFeaturePrintObservation

@property (readonly, nonatomic) NSArray *sceneprints;
@property (readonly, copy, nonatomic) NSString *sceneprintVersion;

+ (BOOL)supportsSecureCoding;
+ (id)sceneprintCurrentVersion;
+ (id)observationWithSceneprints:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)data;
- (unsigned long long)elementType;
- (unsigned long long)hash;
- (unsigned long long)elementCount;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithRequestRevision:(unsigned long long)a0 sceneprints:(id)a1;
- (void)encodeWithCoder:(id)a0;

@end
