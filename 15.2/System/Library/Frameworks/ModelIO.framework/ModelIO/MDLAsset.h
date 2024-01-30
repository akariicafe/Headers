@class MDLAnimatedVector3Array, NSMapTable, NSURL, MDLVertexDescriptor, NSMutableArray, NSUnitLength;
@protocol MDLMeshBufferAllocator, MDLObjectContainerComponent, MDLAssetResolver;

@interface MDLAsset : NSObject <NSCopying, NSFastEnumeration> {
    NSURL *_URL;
    NSMutableArray *_objects;
    double _startTime;
    double _endTime;
    BOOL _isSceneKitBridged;
    NSMapTable *_components;
}

@property (readonly, nonatomic) struct MDLAABB { } _bounds;
@property (nonatomic) double _timeCodesPerSecond;
@property (retain, nonatomic) NSURL *_temporaryFolderURL;
@property (retain, nonatomic) NSUnitLength *unitLength;
@property (nonatomic) float metersPerUnit;
@property (retain, nonatomic) MDLAnimatedVector3Array *extents;
@property (readonly, nonatomic) struct { } boundingBox;
@property (nonatomic) double frameInterval;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (nonatomic) void /* unknown type, empty encoding */ upAxis;
@property (readonly, retain, nonatomic) NSURL *URL;
@property (retain, nonatomic) id<MDLAssetResolver> resolver;
@property (readonly, retain, nonatomic) id<MDLMeshBufferAllocator> bufferAllocator;
@property (readonly, retain, nonatomic) MDLVertexDescriptor *vertexDescriptor;
@property (readonly, nonatomic) unsigned long long count;
@property (retain, nonatomic) id<MDLObjectContainerComponent> masters;
@property (retain, nonatomic) id<MDLObjectContainerComponent> originals;
@property (retain, nonatomic) id<MDLObjectContainerComponent> animations;

+ (BOOL)canExportFileExtension:(id)a0;
+ (BOOL)canImportFileExtension:(id)a0;
+ (id)placeLightProbesWithDensity:(float)a0 heuristic:(long long)a1 usingIrradianceDataSource:(id)a2;
+ (void)convertToUSDZ:(id)a0 writeToURL:(id)a1;
+ (void)convertToUSDZWithURL:(id)a0;
+ (BOOL)isValidUSDZResource:(id)a0;

- (id)components;
- (id)objectAtIndex:(unsigned long long)a0;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (id)initWithURL:(id)a0;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)description;
- (id)initWithURL:(id)a0 options:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addObject:(id)a0;
- (void)_commonInit;
- (void)dealloc;
- (void)removeObject:(id)a0;
- (id)objects;
- (id)objectForKeyedSubscript:(id)a0;
- (struct { })boundingBoxAtTime:(double)a0;
- (id)initWithBufferAllocator:(id)a0;
- (void)_conformVertexBuffers:(id)a0 error:(id *)a1;
- (id)initWithURL:(id)a0 vertexDescriptor:(id)a1 bufferAllocator:(id)a2;
- (void)setComponent:(id)a0 forProtocol:(id)a1;
- (id)componentConformingToProtocol:(id)a0;
- (void)enumerateChildObjectsOfClass:(Class)a0 usingBlock:(id /* block */)a1 stopPointer:(BOOL *)a2;
- (id)childObjectsOfClass:(Class)a0;
- (void)resolveTextures;
- (id)initWithURL:(id)a0 vertexDescriptor:(id)a1 bufferAllocator:(id)a2 preserveTopology:(BOOL)a3 error:(id *)a4;
- (id)initWithURL:(id)a0 bufferAllocator:(id)a1 preserveIndexing:(BOOL)a2 error:(id *)a3;
- (BOOL)exportAssetToURL:(id)a0 error:(id *)a1;
- (id)objectAtPath:(id)a0;
- (void)loadTextures;
- (id)initWithData:(id)a0 name:(id)a1 vertexDescriptor:(id)a2 bufferAllocator:(id)a3 preserveTopology:(BOOL)a4 error:(id *)a5;
- (id)initThroughSCNKitBridgeWithURL:(id)a0 preserveTopology:(BOOL)a1 error:(id)a2;
- (BOOL)exportAssetToURL:(id)a0;

@end
