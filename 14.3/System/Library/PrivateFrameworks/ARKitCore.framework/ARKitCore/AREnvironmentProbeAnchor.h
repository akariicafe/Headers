@class NSData, NSUUID;
@protocol MTLTexture;

@interface AREnvironmentProbeAnchor : ARAnchor

@property (retain, nonatomic) id<MTLTexture> environmentTexture;
@property (retain, nonatomic) NSData *colorHistogram;
@property (nonatomic) float opaquePixelPercentage;
@property (retain, nonatomic) NSUUID *trackedPlaneIdentifier;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ extent;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithAnchor:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithName:(id)a0 transform:(struct { void /* unknown type, empty encoding */ x0[4]; })a1;
- (id)initWithIdentifier:(id)a0 transform:(struct { void /* unknown type, empty encoding */ x0[4]; })a1;
- (id)initWithIdentifier:(SEL)a0 transform:(id)a1 extent:(struct { void /* unknown type, empty encoding */ x0[4]; })a2;
- (id)initWithTransform:(SEL)a0 extent:(struct { void /* unknown type, empty encoding */ x0[4]; })a1;
- (id)initWithName:(SEL)a0 transform:(id)a1 extent:(struct { void /* unknown type, empty encoding */ x0[4]; })a2;
- (id)initWithIdentifier:(id)a0 onPlane:(struct ARTexturedPlane { struct array<unsigned char, 16> { unsigned char x0[16]; } x0; unsigned long long x1; struct { void /* unknown type, empty encoding */ x0[4]; } x2; struct array<float __attribute__((ext_vector_type(3))), 4> { void /* unknown type, empty encoding */ x0[4]; } x3; struct set<std::__1::array<unsigned char, 16>, std::__1::less<std::__1::array<unsigned char, 16> >, std::__1::allocator<std::__1::array<unsigned char, 16> > > { struct __tree<std::__1::array<unsigned char, 16>, std::__1::less<std::__1::array<unsigned char, 16> >, std::__1::allocator<std::__1::array<unsigned char, 16> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> *x0; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::array<unsigned char, 16>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__1::less<std::__1::array<unsigned char, 16> > > { unsigned long long x0; } x2; } x0; } x4; id x5; })a1;

@end
