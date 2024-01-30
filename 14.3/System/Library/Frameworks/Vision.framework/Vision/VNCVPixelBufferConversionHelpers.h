@interface VNCVPixelBufferConversionHelpers : NSObject

+ (id)dictionaryRepresentationClassesSet;
+ (id)createDictionaryRepresentationOfCVPixelBuffer:(struct __CVBuffer { } *)a0;
+ (struct __CVBuffer { } *)createCVPixelBufferRefFromDictionaryRepresentation:(id)a0;
+ (BOOL)isCVPixelBuffer:(struct __CVBuffer { } *)a0 equalToCVPixelBuffer:(struct __CVBuffer { } *)a1;
+ (unsigned long long)computeHashForCVPixelBuffer:(struct __CVBuffer { } *)a0;

@end
