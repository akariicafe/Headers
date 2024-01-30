@class NSString, MKAnnotationView, VKCustomFeature;

@interface _MKAnnotationViewCustomFeatureAnnotation : NSObject <VKCustomFeatureAnnotation, NSSecureCoding> {
    VKCustomFeature *_customFeature;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) VKCustomFeature *feature;
@property (nonatomic) struct { double latitude; double longitude; } coordinate;
@property (weak, nonatomic) MKAnnotationView *annotationView;
@property (nonatomic) double course;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)setCustomFeature:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
