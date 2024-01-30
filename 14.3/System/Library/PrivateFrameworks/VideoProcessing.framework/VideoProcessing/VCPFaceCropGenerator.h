@interface VCPFaceCropGenerator : NSObject

+ (id)_faceCropDataForImage:(id)a0 andNormalizedFaceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 error:(id *)a2;
+ (id)_generateFaceCropWithDescriptor:(id)a0 andCancelBlock:(id)a1 error:(id *)a2;
+ (void)_reportCancellationOfRemainingFaceCropSourceDescriptors:(id)a0 withStartingIndex:(unsigned long long)a1 andFailureBlock:(id /* block */)a2;
+ (id)generateFaceCropsFromSourceDescriptors:(id)a0 withProgressBlock:(id /* block */)a1 andFailureBlock:(id /* block */)a2 andCancelBlock:(id)a3;

@end
