@class PKDrawingConcrete;

@interface PKDrawingVersionedDocument : PKVersionedDocument

@property (retain, nonatomic) PKDrawingConcrete *drawing;
@property (retain, nonatomic) Class drawingClass;
@property (nonatomic) BOOL loadNonInkingStrokes;

+ (unsigned int)minimumSupportedVersion;
+ (unsigned int)serializationVersion;

- (void).cxx_destruct;
- (id)initWithDrawing:(id)a0;
- (void)mergeVersion:(unsigned int)a0 fromData:(id)a1;
- (id)serializeCurrentVersion:(unsigned int *)a0;
- (unsigned long long)mergeWithDrawingVersionedDocument:(id)a0;
- (id)initWithDrawingClass:(Class)a0;
- (BOOL)loadUnzippedData:(id)a0;

@end
