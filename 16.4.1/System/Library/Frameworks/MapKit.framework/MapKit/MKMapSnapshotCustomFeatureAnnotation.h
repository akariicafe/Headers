@class NSString, _MKAnnotationViewCustomFeatureAnnotation;

@interface MKMapSnapshotCustomFeatureAnnotation : NSObject <MKCustomFeatureAnnotation, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _MKAnnotationViewCustomFeatureAnnotation *internalCustomFeatureAnnotation;
@property (readonly, nonatomic) BOOL showsBalloonCallout;
@property (nonatomic) struct { double x0; double x1; } coordinate;
@property (nonatomic) double course;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)customFeatureAnnotationForMapItem:(id)a0;
+ (id)customFeatureAnnotationForMapItem:(id)a0 styleAttributes:(id)a1 suppressLabel:(BOOL)a2;
+ (id)customFeatureAnnotationForMapItem:(id)a0 styleAttributes:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)feature;
- (void).cxx_destruct;
- (id)initWithCustomFeature:(id)a0 coordinate:(struct { double x0; double x1; })a1;

@end
