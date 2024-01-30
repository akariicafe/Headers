@class ICDrawing;

@interface ICDrawingVersionedDocument : TTVersionedDocument

@property (readonly, nonatomic) ICDrawing *drawing;

+ (unsigned int)minimumSupportedVersion;
+ (unsigned int)serializationVersion;

- (void).cxx_destruct;
- (void)mergeVersion:(unsigned int)a0 fromData:(id)a1;
- (id)serializeCurrentVersion:(unsigned int *)a0;
- (unsigned long long)mergeWithDrawingVersionedDocument:(id)a0;

@end
