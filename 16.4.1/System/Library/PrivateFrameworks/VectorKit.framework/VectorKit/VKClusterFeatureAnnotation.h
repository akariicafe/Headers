@class NSString, VKCustomFeature;

@interface VKClusterFeatureAnnotation : NSObject <VKCustomFeatureAnnotation> {
    VKCustomFeature *_customFeature;
}

@property (nonatomic) struct { double latitude; double longitude; } coordinate;
@property (nonatomic) double course;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)feature;
- (void).cxx_destruct;
- (id)initWithClusterNode:(void *)a0 clusterTree:(const void *)a1 baseStyle:(const void *)a2 imageText:(id)a3 annotationText:(id)a4 annotationLocale:(id)a5;

@end
