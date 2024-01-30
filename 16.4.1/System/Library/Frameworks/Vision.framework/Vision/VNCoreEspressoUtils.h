@interface VNCoreEspressoUtils : NSObject

+ (BOOL)getInputImageTensorDescriptor:(id *)a0 forBlobName:(id)a1 pixelFormatType:(unsigned int)a2 outputTensorDescriptors:(id *)a3 forBlobNamesWithTypes:(id)a4 fromNetworkModelFileWithPath:(id)a5 error:(id *)a6;
+ (id)tensorShapesForBlobNames:(id)a0 ofNetworkModelFileWithPath:(id)a1 error:(id *)a2;

@end
