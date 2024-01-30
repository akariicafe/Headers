@interface ARQAHelper : NSObject

+ (id)formatDescriptionForPlaneAnchor;
+ (float)_meanDepthValueOfDepthBuffer:(struct __CVBuffer { } *)a0 consideringSegmentation:(BOOL)a1 ofSegmentationBuffer:(struct __CVBuffer { } *)a2;
+ (id)arrayFromRaycastResults:(id)a0;
+ (id)arrayOf2dPoints:(const void *)a0 count:(unsigned long long)a1;
+ (id)arrayOf3dPoints:(const void *)a0 count:(unsigned long long)a1;
+ (id)arrayWithMatrix3x3:(struct { void /* unknown type, empty encoding */ x0[3]; })a0;
+ (id)arrayWithMatrix4x4:(struct { void /* unknown type, empty encoding */ x0[4]; })a0;
+ (id)arrayWithVector2:(SEL)a0;
+ (id)arrayWithVector3:(SEL)a0;
+ (id)arrayWithVector4:(SEL)a0;
+ (id)dictionaryFromAnchor:(id)a0;
+ (id)dictionaryFromCLLocation:(id)a0;
+ (id)dictionaryFromMeshAnchor:(id)a0;
+ (id)dictionaryFromMeshGeometry:(id)a0;
+ (id)dictionaryFromPatchGrid:(id)a0;
+ (id)dictionaryFromPlaneAnchor:(id)a0;
+ (id)dictionaryFromPlaneExtent:(id)a0;
+ (id)dictionaryFromRawCLLocation:(id)a0;
+ (id)dictionaryFromRaycastQuery:(id)a0;
+ (id)dictionaryFromVertices:(const void *)a0 vertexCount:(unsigned long long)a1 textureCoordinates:(const void *)a2 textureCoordinateCount:(unsigned long long)a3;
+ (id)extractAnchorDataForFrame:(id)a0;
+ (id)extractDetectedBodiesForFrame:(id)a0;
+ (id)formatDescriptionForAnchor;
+ (id)generateTagsForConfiguration:(id)a0 replaySensor:(id)a1 technique:(id)a2;
+ (id)headerInformationWithConfiguration:(id)a0 technique:(id)a1;
+ (void)techniquesArray:(id)a0 array:(id)a1;
+ (id)traceFrameData:(id)a0 withFrameIndex:(unsigned long long)a1;
+ (id)traceFrameData:(id)a0 withFrameIndex:(unsigned long long)a1 writeOBJ:(BOOL)a2;
+ (void)traverseTechniques:(id)a0 withBlock:(id /* block */)a1;

@end
