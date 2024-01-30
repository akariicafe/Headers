@class NSString, HMIDESMutableFloatArray;

@interface HMIFaceQualityDistanceToJunkCluster : HMFObject <HMFLogging> {
    float _maxDistanceScore;
    HMIDESMutableFloatArray *_junkCentroid;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)init;
- (void).cxx_destruct;
- (float)computeJunkScoreForFacePrint:(id)a0;

@end
