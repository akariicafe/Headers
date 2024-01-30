@class NSString, VKCustomFeature;

@interface MKMapSnapshotFeatureAnnotation : NSObject <MKCustomFeatureAnnotation, NSSecureCoding> {
    NSString *_title;
    VKCustomFeature *_customFeature;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long representation;
@property (readonly, nonatomic) BOOL showsBalloonCallout;
@property (nonatomic) struct { double latitude; double longitude; } coordinate;
@property (nonatomic) double course;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 title:(id)a1 representation:(long long)a2;
- (void).cxx_destruct;
- (void)setShowsBalloonCallout:(BOOL)a0;
- (id)initWithCoder:(id)a0;
- (id)feature;

@end
