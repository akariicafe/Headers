@class NSString;

@interface DTXBlockCompressorLibCompression : NSObject <DTXBlockCompressor> {
    _Atomic unsigned long long _lzfseScratchBuffer;
    _Atomic unsigned long long _lz4ScratchBuffer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (unsigned long long)compressBuffer:(const char *)a0 ofLength:(unsigned long long)a1 toBuffer:(char *)a2 ofLength:(unsigned long long)a3 usingCompressionType:(int)a4 withFinalCompressionType:(int *)a5;
- (BOOL)uncompressBuffer:(const char *)a0 ofLength:(unsigned long long)a1 toBuffer:(char *)a2 withKnownUncompressedLength:(unsigned long long)a3 usingCompressionType:(int)a4;

@end
