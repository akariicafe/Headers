@class NSString;

@interface AXMediaUtilities.AXBoundingBox : NSObject {
    void /* unknown type, empty encoding */ id;
    void /* unknown type, empty encoding */ heat;
    void /* unknown type, empty encoding */ angle;
    void /* unknown type, empty encoding */ rect;
    void /* unknown type, empty encoding */ classIndex;
    void /* unknown type, empty encoding */ heatByClass;
    void /* unknown type, empty encoding */ firstSeen;
    void /* unknown type, empty encoding */ lastSeen;
    void /* unknown type, empty encoding */ depth;
    void /* unknown type, empty encoding */ centroid3d;
    void /* unknown type, empty encoding */ knownFeaturePoints;
    void /* unknown type, empty encoding */ physicalSize;
}

@property (nonatomic, readonly) NSString *description;

+ (id)postComputeClickabilityWithDecoded:(id)a0 nmsThreshold:(float)a1 filterThresholds:(id)a2;
+ (id)postComputeWithDecoded:(id)a0 nmsThreshold:(float)a1 filterThresholds:(id)a2;

- (id)init;
- (void).cxx_destruct;

@end
