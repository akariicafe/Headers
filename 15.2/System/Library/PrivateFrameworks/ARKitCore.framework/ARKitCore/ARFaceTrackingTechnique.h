@class NSUUID;

@interface ARFaceTrackingTechnique : ARImageBasedTechnique {
    NSUUID *_singleUserAnchorIdentifier;
}

@property BOOL isFaceTracked;
@property (readonly, nonatomic) long long maximumNumberOfTrackedFaces;

+ (BOOL)isSupported;
+ (BOOL)producesResultDataForAnchorOfClass:(Class)a0;

- (id)processData:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)resultDataClasses;
- (unsigned long long)requiredSensorDataTypes;
- (id)initWithMaximumNumberOfTrackedFaces:(long long)a0;

@end
