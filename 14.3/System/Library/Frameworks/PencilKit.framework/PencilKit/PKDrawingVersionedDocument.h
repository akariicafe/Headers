@class PKDrawing;

@interface PKDrawingVersionedDocument : PKVersionedDocument

@property (retain, nonatomic) PKDrawing *drawing;
@property (nonatomic) BOOL loadNonInkingStrokes;

+ (unsigned int)minimumSupportedVersion;
+ (unsigned int)serializationVersion;

- (void)mergeVersion:(unsigned int)a0 fromData:(id)a1;
- (id)serializeCurrentVersion:(unsigned int *)a0;
- (void).cxx_destruct;
- (id)initWithDrawing:(id)a0;
- (unsigned long long)mergeWithDrawingVersionedDocument:(id)a0;
- (BOOL)loadUnzippedData:(id)a0;

@end
