@class NSString, ARGeoTrackingStatus;

@interface ARVLStateData : NSObject <ARDaemonSecureCoding, NSCopying, ARResultData>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double timeSinceLastLocalization;
@property (readonly, nonatomic) double timeSinceInitialization;
@property (readonly, nonatomic) ARGeoTrackingStatus *trackingStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init:(double)a0 timeSinceInitialization:(double)a1 trackingStatus:(id)a2;

@end
