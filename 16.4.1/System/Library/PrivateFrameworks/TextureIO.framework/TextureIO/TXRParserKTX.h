@class NSString, NSDictionary, TXRTextureInfo, TXRDeferredTextureInfo, NSObject;
@protocol OS_dispatch_queue;

@interface TXRParserKTX : NSObject <TXRParser> {
    unsigned int _bytesOfKeyValueData;
    BOOL _isCompressed;
    NSDictionary *_internalSizedFormatLookup;
    TXRDeferredTextureInfo *_deferredTextureInfo;
    NSObject<OS_dispatch_queue> *_parserQueue;
    BOOL _shouldFlipVertically;
}

@property (readonly, nonatomic) TXRTextureInfo *textureInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)exportTexture:(id)a0 url:(id)a1 error:(id *)a2;
+ (BOOL)handlesData:(id)a0;

- (void).cxx_destruct;
- (unsigned long long)determineFormatFromType:(unsigned int)a0 format:(unsigned int)a1 internalFormat:(unsigned int)a2 baseInternalFormat:(unsigned int)a3;
- (BOOL)parseData:(id)a0 bufferAllocator:(id)a1 options:(id)a2 error:(id *)a3;
- (void)parseImageData:(id)a0 WithOptions:(id)a1 bufferAllocator:(id)a2;
- (id)parsedImageAtLevel:(unsigned long long)a0 element:(unsigned long long)a1 face:(unsigned long long)a2;

@end
