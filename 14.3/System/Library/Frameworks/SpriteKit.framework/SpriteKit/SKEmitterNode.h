@class UIColor, SKTexture, SKKeyframeSequence, SKAction, SKNode, SKShader, NSDictionary;

@interface SKEmitterNode : SKNode {
    SKTexture *_particleTexture;
    struct SKCEmitterNode { void /* function */ **x0; id x1; BOOL x2; struct unordered_map<std::__1::basic_string<char>, SKAttributeValue *, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, SKAttributeValue *> > > { struct __hash_table<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::__unordered_map_hasher<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::hash<std::__1::basic_string<char> >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::equal_to<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *> > > { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> *> > > { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> **x0; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> *> > { unsigned long long x0; } x0; } x1; } x0; } x0; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::hash<std::__1::basic_string<char> >, true> > { unsigned long long x0; } x2; struct __compressed_pair<float, std::__1::__unordered_map_equal<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::equal_to<std::__1::basic_string<char> >, true> > { float x0; } x3; } x0; } x3; id x4; id x5; struct SKCNode *x6; struct vector<SKCNode *, std::__1::allocator<SKCNode *> > { struct SKCNode **x0; struct SKCNode **x1; struct __compressed_pair<SKCNode **, std::__1::allocator<SKCNode *> > { struct SKCNode **x0; } x2; } x7; struct vector<SKCNode *, std::__1::allocator<SKCNode *> > { struct SKCNode **x0; struct SKCNode **x1; struct __compressed_pair<SKCNode **, std::__1::allocator<SKCNode *> > { struct SKCNode **x0; } x2; } x8; struct vector<SKCNode *, std::__1::allocator<SKCNode *> > { struct SKCNode **x0; struct SKCNode **x1; struct __compressed_pair<SKCNode **, std::__1::allocator<SKCNode *> > { struct SKCNode **x0; } x2; } x9; id x10; float x11; BOOL x12; struct list<SKCAction *, std::__1::allocator<SKCAction *> > { struct __list_node_base<SKCAction *, void *> { struct __list_node_base<SKCAction *, void *> *x0; struct __list_node_base<SKCAction *, void *> *x1; } x0; struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<SKCAction *, void *> > > { unsigned long long x0; } x1; } x13; struct list<SKCAction *, std::__1::allocator<SKCAction *> > { struct __list_node_base<SKCAction *, void *> { struct __list_node_base<SKCAction *, void *> *x0; struct __list_node_base<SKCAction *, void *> *x1; } x0; struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<SKCAction *, void *> > > { unsigned long long x0; } x1; } x14; BOOL x15; id x16; struct shared_ptr<PKPath> { struct PKPath *x0; struct __shared_weak_count *x1; } x17; unsigned int x18; unsigned int x19; BOOL x20; long long x21; float x22; float x23; BOOL x24; BOOL x25; struct { void /* unknown type, empty encoding */ x0[4]; } x26; struct { void /* unknown type, empty encoding */ x0[4]; } x27; BOOL x28; BOOL x29; id x30; id x31; id x32; struct SKCParticleSystemNode *x33; struct SKCParticleSystem *x34; double x35; BOOL x36; struct SKCKeyframeSequence *x37; struct SKCKeyframeSequence *x38; struct SKCKeyframeSequence *x39; struct SKCKeyframeSequence *x40; struct SKCKeyframeSequence *x41; struct SKCKeyframeSequence *x42; struct SKCKeyframeSequence *x43; unsigned long long x44; unsigned long long x45; int x46; int x47; double x48; double x49; double x50; double x51; struct CGSize { double x0; double x1; } x52; float x53; float x54; float x55; float x56; float x57; struct { float x0; float x1; float x2; float x3; } x58; struct { float x0; float x1; float x2; float x3; } x59; struct { float x0; float x1; float x2; float x3; } x60; float x61; float x62; float x63; struct list<PKPoint, std::__1::allocator<PKPoint> > { struct __list_node_base<PKPoint, void *> { struct __list_node_base<PKPoint, void *> *x0; struct __list_node_base<PKPoint, void *> *x1; } x0; struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<PKPoint, void *> > > { unsigned long long x0; } x1; } x64; struct { float x0; float x1; } x65; struct { float x0; float x1; } x66; float x67; float x68; float x69; float x70; struct { float x0; float x1; } x71; float x72; float x73; float x74; float x75; float x76; float x77; float x78; float x79; float x80; float x81; float x82; float x83; id x84; long long x85; unsigned int x86; unsigned int x87; unsigned int x88; BOOL x89; BOOL x90; struct SKCEmitterNode *x91; struct list<SKCEmitterNode *, std::__1::allocator<SKCEmitterNode *> > { struct __list_node_base<SKCEmitterNode *, void *> { struct __list_node_base<SKCEmitterNode *, void *> *x0; struct __list_node_base<SKCEmitterNode *, void *> *x1; } x0; struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<SKCEmitterNode *, void *> > > { unsigned long long x0; } x1; } x92; } *_skcEmitterNode;
    SKNode *_target;
    SKKeyframeSequence *_colorSequence;
    SKKeyframeSequence *_colorBlendSequence;
    SKKeyframeSequence *_alphaSequence;
    SKKeyframeSequence *_scaleSequence;
    SKKeyframeSequence *_rotationSequence;
    SKKeyframeSequence *_fieldInfluenceSequence;
    SKKeyframeSequence *_particleSpeedSequence;
}

@property (retain, nonatomic) SKTexture *particleTexture;
@property (nonatomic) long long particleBlendMode;
@property (retain, nonatomic) UIColor *particleColor;
@property (nonatomic) double particleColorRedRange;
@property (nonatomic) double particleColorGreenRange;
@property (nonatomic) double particleColorBlueRange;
@property (nonatomic) double particleColorAlphaRange;
@property (nonatomic) double particleColorRedSpeed;
@property (nonatomic) double particleColorGreenSpeed;
@property (nonatomic) double particleColorBlueSpeed;
@property (nonatomic) double particleColorAlphaSpeed;
@property (retain, nonatomic) SKKeyframeSequence *particleColorSequence;
@property (nonatomic) double particleColorBlendFactor;
@property (nonatomic) double particleColorBlendFactorRange;
@property (nonatomic) double particleColorBlendFactorSpeed;
@property (retain, nonatomic) SKKeyframeSequence *particleColorBlendFactorSequence;
@property (nonatomic) struct CGPoint { double x0; double x1; } particlePosition;
@property (nonatomic) struct CGVector { double x0; double x1; } particlePositionRange;
@property (nonatomic) double particleSpeed;
@property (nonatomic) double particleSpeedRange;
@property (nonatomic) double emissionAngle;
@property (nonatomic) double emissionAngleRange;
@property (nonatomic) double xAcceleration;
@property (nonatomic) double yAcceleration;
@property (nonatomic) double particleBirthRate;
@property (nonatomic) unsigned long long numParticlesToEmit;
@property (nonatomic) double particleLifetime;
@property (nonatomic) double particleLifetimeRange;
@property (nonatomic) double particleRotation;
@property (nonatomic) double particleRotationRange;
@property (nonatomic) double particleRotationSpeed;
@property (nonatomic) struct CGSize { double x0; double x1; } particleSize;
@property (nonatomic) double particleScale;
@property (nonatomic) double particleScaleRange;
@property (nonatomic) double particleScaleSpeed;
@property (retain, nonatomic) SKKeyframeSequence *particleScaleSequence;
@property (nonatomic) double particleAlpha;
@property (nonatomic) double particleAlphaRange;
@property (nonatomic) double particleAlphaSpeed;
@property (retain, nonatomic) SKKeyframeSequence *particleAlphaSequence;
@property (copy, nonatomic) SKAction *particleAction;
@property (nonatomic) unsigned int fieldBitMask;
@property (weak, nonatomic) SKNode *targetNode;
@property (retain, nonatomic) SKShader *shader;
@property (copy, nonatomic) NSDictionary *attributeValues;
@property (nonatomic) double particleZPosition;
@property (nonatomic) unsigned long long particleRenderOrder;
@property (nonatomic) double particleZPositionRange;
@property (nonatomic) double particleZPositionSpeed;

+ (BOOL)supportsSecureCoding;
+ (id)debugHierarchyPropertyDescriptions;
+ (id)debugHierarchyValueForPropertyWithName:(id)a0 onObject:(id)a1 outOptions:(id *)a2 outError:(id *)a3;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)commonInit;
- (void)dealloc;
- (BOOL)isEqualToNode:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)setZPosition:(double)a0;
- (void)encodeWithCoder:(id)a0;
- (id)physicsWorld;
- (struct SKCNode { void /* function */ **x0; id x1; BOOL x2; struct unordered_map<std::__1::basic_string<char>, SKAttributeValue *, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, SKAttributeValue *> > > { struct __hash_table<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::__unordered_map_hasher<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::hash<std::__1::basic_string<char> >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::equal_to<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *> > > { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> *> > > { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> **x0; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> *> > { unsigned long long x0; } x0; } x1; } x0; } x0; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::hash<std::__1::basic_string<char> >, true> > { unsigned long long x0; } x2; struct __compressed_pair<float, std::__1::__unordered_map_equal<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::equal_to<std::__1::basic_string<char> >, true> > { float x0; } x3; } x0; } x3; id x4; id x5; struct SKCNode *x6; struct vector<SKCNode *, std::__1::allocator<SKCNode *> > { struct SKCNode **x0; struct SKCNode **x1; struct __compressed_pair<SKCNode **, std::__1::allocator<SKCNode *> > { struct SKCNode **x0; } x2; } x7; struct vector<SKCNode *, std::__1::allocator<SKCNode *> > { struct SKCNode **x0; struct SKCNode **x1; struct __compressed_pair<SKCNode **, std::__1::allocator<SKCNode *> > { struct SKCNode **x0; } x2; } x8; struct vector<SKCNode *, std::__1::allocator<SKCNode *> > { struct SKCNode **x0; struct SKCNode **x1; struct __compressed_pair<SKCNode **, std::__1::allocator<SKCNode *> > { struct SKCNode **x0; } x2; } x9; id x10; float x11; BOOL x12; struct list<SKCAction *, std::__1::allocator<SKCAction *> > { struct __list_node_base<SKCAction *, void *> { struct __list_node_base<SKCAction *, void *> *x0; struct __list_node_base<SKCAction *, void *> *x1; } x0; struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<SKCAction *, void *> > > { unsigned long long x0; } x1; } x13; struct list<SKCAction *, std::__1::allocator<SKCAction *> > { struct __list_node_base<SKCAction *, void *> { struct __list_node_base<SKCAction *, void *> *x0; struct __list_node_base<SKCAction *, void *> *x1; } x0; struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<SKCAction *, void *> > > { unsigned long long x0; } x1; } x14; BOOL x15; id x16; struct shared_ptr<PKPath> { struct PKPath *x0; struct __shared_weak_count *x1; } x17; unsigned int x18; unsigned int x19; BOOL x20; long long x21; float x22; float x23; BOOL x24; BOOL x25; struct { void /* unknown type, empty encoding */ x0[4]; } x26; struct { void /* unknown type, empty encoding */ x0[4]; } x27; } *)_makeBackingNode;
- (void)_didMakeBackingNode;
- (id)valueForAttributeNamed:(id)a0;
- (void)setValue:(id)a0 forAttributeNamed:(id)a1;
- (void)copyParticlePropertiesToNode:(id)a0;
- (id)particleSpeedSequence;
- (void)setEmissionDistance:(double)a0;
- (void)setEmissionDistanceRange:(double)a0;
- (void)setParticleRotationSequence:(id)a0;
- (void)setFieldInfluenceSequence:(id)a0;
- (void)setParticleSpeedSequence:(id)a0;
- (double)emissionDistance;
- (double)emissionDistanceRange;
- (id)particleRotationSequence;
- (id)fieldInfluenceSequence;
- (BOOL)densityBased;
- (void)setDensityBased:(BOOL)a0;
- (double)particleDensity;
- (void)setParticleDensity:(double)a0;
- (BOOL)wantsNewParticles;
- (void)setWantsNewParticles:(BOOL)a0;
- (BOOL)usesPointSprites;
- (void)setUsesPointSprites:(BOOL)a0;
- (id)subEmitterNode;
- (void)setPhysicsWorld:(id)a0;
- (unsigned int)activeParticleCount;
- (void)resetSimulation;
- (id)initWithMinimumParticleCapacity:(unsigned long long)a0;
- (id)initWithMinimumParticleCapacity:(unsigned long long)a0 minimumPositionBufferCapacity:(unsigned long long)a1;
- (void)advanceSimulationTime:(double)a0;

@end
