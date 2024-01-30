@class NSUUID;

@interface ARFaceTrackingTechnique : ARImageBasedTechnique {
    NSUUID *_singleUserAnchorIdentifier;
}

@property BOOL isFaceTracked;
@property (readonly, nonatomic) long long maximumNumberOfTrackedFaces;

+ (BOOL)isSupported;
+ (BOOL)producesResultDataForAnchorOfClass:(Class)a0;

- (BOOL)isEqual:(id)a0;
- (id)processData:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithMaximumNumberOfTrackedFaces:(long long)a0;
- (unsigned long long)requiredSensorDataTypes;
- (id)resultDataClasses;

@end
