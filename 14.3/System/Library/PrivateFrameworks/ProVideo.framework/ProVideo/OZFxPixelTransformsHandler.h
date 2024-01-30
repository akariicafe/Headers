@class NSString;

@interface OZFxPixelTransformsHandler : NSObject <PROAPIObject, FxPixelTransformsAPI>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setAgent:(const struct LiAgent { struct LiAgent *x0; struct LiImageSource *x1; struct LiImageSource *x2; struct LiImageSource *x3; int x4; int x5; int x6; BOOL x7; struct LiRenderParameters *x8; BOOL x9; struct PCRect<int> { int x0; int x1; int x2; int x3; } x10; BOOL x11; struct PCRect<int> { int x0; int x1; int x2; int x3; } x12; struct LiClipSet { struct PCArray<PCVector4<double>, PCArray_Traits<PCVector4<double> > > { void /* function */ **x0; int x1; int x2; struct PCVector4<double> *x3; } x0; struct PCArray<int, PCArray_Traits<int> > { void /* function */ **x0; int x1; int x2; int *x3; } x1; } x13; struct LiClipSet *x14; struct LiClipSet *x15; struct PCMatrix44Tmpl<double> *x16; struct PCMatrix44Tmpl<double> *x17; struct PCMatrix44Tmpl<double> *x18; struct PCMatrix44Tmpl<double> *x19; struct PCMatrix44Tmpl<double> *x20; struct PCMatrix44Tmpl<double> *x21; struct PCMatrix44Tmpl<double> *x22; struct PCMatrix44Tmpl<double> *x23; struct PCMatrix44Tmpl<double> *x24; struct PCMatrix44Tmpl<double> *x25; struct PCMatrix44Tmpl<double> *x26; BOOL x27; struct HGRef<HGNode> { struct HGNode *x0; } x28; struct LiImagePolygon { void /* function */ **x0; int x1; struct PCPlane<double> { struct PCVector3<double> { double x0; double x1; double x2; } x0; struct PCVector3<double> { double x0; double x1; double x2; } x1; } x2; struct vector<LiPolygon::PosEdge, std::__1::allocator<LiPolygon::PosEdge> > { struct PosEdge *x0; struct PosEdge *x1; struct __compressed_pair<LiPolygon::PosEdge *, std::__1::allocator<LiPolygon::PosEdge> > { struct PosEdge *x0; } x2; } x3; struct PosFacet { struct vector<LiPolygon::PosEdge, std::__1::allocator<LiPolygon::PosEdge> > *x0; } x4; BOOL x5; struct LiChannelT<PCVector3<double> > { struct vector<PCVector3<double>, std::__1::allocator<PCVector3<double> > > { struct PCVector3<double> *x0; struct PCVector3<double> *x1; struct __compressed_pair<PCVector3<double> *, std::__1::allocator<PCVector3<double> > > { struct PCVector3<double> *x0; } x2; } x0; } x6; struct LiChannelT<PCVector3<double> > { struct vector<PCVector3<double>, std::__1::allocator<PCVector3<double> > > { struct PCVector3<double> *x0; struct PCVector3<double> *x1; struct __compressed_pair<PCVector3<double> *, std::__1::allocator<PCVector3<double> > > { struct PCVector3<double> *x0; } x2; } x0; } x7; struct EdgeFacet { struct vector<LiPolygon::PosEdge, std::__1::allocator<LiPolygon::PosEdge> > *x0; } x8; } x29; BOOL x30; struct PCVector2<float> { float x0; float x1; } x31; struct LiAgentData *x32; struct PCColorSpaceHandle { struct CGColorSpace *x0; } x33; struct PCColorSpaceHandle { struct CGColorSpace *x0; } x34; } *)a0;
- (id)init;
- (struct PCMatrix44Tmpl<double> { double x0[4][4]; })pixelTransform;
- (struct PCMatrix44Tmpl<double> { double x0[4][4]; })inversePixelTransform;
- (struct PCMatrix44Tmpl<double> { double x0[4][4]; })destinationPixelTransform;
- (struct PCMatrix44Tmpl<double> { double x0[4][4]; })destinationInversePixelTransform;
- (void)setPreTransform:(const struct PCMatrix44Tmpl<double> { double x0[4][4]; } *)a0;
- (void)setPostTransform:(const struct PCMatrix44Tmpl<double> { double x0[4][4]; } *)a0;
- (BOOL)conformsToProtocol:(id)a0 version:(unsigned int)a1;

@end
