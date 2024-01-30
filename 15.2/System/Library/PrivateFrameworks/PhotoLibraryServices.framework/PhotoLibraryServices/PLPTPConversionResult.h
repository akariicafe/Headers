@class NSString, UTType;

@interface PLPTPConversionResult : NSObject

@property (readonly) BOOL requiresConversion;
@property (readonly, copy) NSString *pathExtension;
@property (readonly) unsigned long long estimatedFileLength;
@property (readonly) unsigned int inputVideoCodec;
@property (readonly) UTType *inputContentType;
@property (readonly) unsigned int outputVideoCodec;
@property (readonly) UTType *outputContentType;

- (id)initWithRequiresConversion:(BOOL)a0 pathExtension:(id)a1 estimatedFileLength:(unsigned long long)a2 inputVideoCodec:(unsigned int)a3 inputContentType:(id)a4 outputVideoCodec:(unsigned int)a5 outputContentType:(id)a6;
- (void).cxx_destruct;

@end
