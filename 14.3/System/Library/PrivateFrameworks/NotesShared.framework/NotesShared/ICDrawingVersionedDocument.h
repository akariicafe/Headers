@class ICDrawing;

@interface ICDrawingVersionedDocument : TTVersionedDocument

@property (retain, nonatomic) ICDrawing *drawing;

+ (unsigned int)minimumSupportedVersion;
+ (unsigned int)serializationVersion;

- (void)mergeVersion:(unsigned int)a0 fromData:(id)a1;
- (id)serializeCurrentVersion:(unsigned int *)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0 andReplicaID:(id)a1;
- (unsigned long long)mergeWithDrawingVersionedDocument:(id)a0;

@end
