@class NSArray, NSString;

@interface VNSceneObservation : VNFeaturePrintObservation

@property (readonly, nonatomic) NSArray *sceneprints;
@property (readonly, copy, nonatomic) NSString *sceneprintVersion;

+ (BOOL)supportsSecureCoding;
+ (id)defaultOriginatingRequestClassNameForRequestRevision:(unsigned long long)a0;
+ (id)sceneprintCurrentVersion;
+ (id)observationWithSceneprints:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (unsigned long long)elementType;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)vn_cloneObject;
- (unsigned long long)elementCount;
- (id)data;
- (id)initWithRequestRevision:(unsigned long long)a0 sceneprints:(id)a1;
- (id)initWithOriginatingRequestSpecifier:(id)a0 sceneprints:(id)a1;

@end
