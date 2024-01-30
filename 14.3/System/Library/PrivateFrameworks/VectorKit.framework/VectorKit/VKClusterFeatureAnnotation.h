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

- (void)dealloc;
- (id)initWithClusterNode:(struct ClusterTreeClusterNode { void /* function */ **x0; struct Range<float> { float x0; float x1; } x1; struct Mercator2<double> { double x0[2]; } x2; struct ClusterTreeClusterNode *x3; unsigned int x4; unsigned int x5; unsigned char x6; BOOL x7; struct _retain_ptr<id<VKCustomFeatureAnnotation>, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> { void /* function */ **x0; id x1; struct _retain_objc { } x2; struct _release_objc { } x3; } x8; struct ClusterTreeNode *x9[2]; struct ClusterTreeFeatureNode *x10; double x11; unsigned int x12; BOOL x13; BOOL x14; } *)a0 clusterTree:(const struct shared_ptr<md::LabelClusterTree> { struct LabelClusterTree *x0; struct __shared_weak_count *x1; } *)a1 baseStyle:(id)a2 imageText:(id)a3 annotationText:(id)a4 annotationLocale:(id)a5;
- (id)feature;

@end
