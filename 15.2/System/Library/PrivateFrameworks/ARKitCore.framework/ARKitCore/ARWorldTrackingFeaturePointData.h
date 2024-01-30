@class ARPointCloud, NSString;

@interface ARWorldTrackingFeaturePointData : NSObject <ARResultData, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double timestamp;
@property (retain, nonatomic) ARPointCloud *visionFeaturePoints;
@property (retain, nonatomic) ARPointCloud *featurePoints;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTimestamp:(double)a0;

@end
