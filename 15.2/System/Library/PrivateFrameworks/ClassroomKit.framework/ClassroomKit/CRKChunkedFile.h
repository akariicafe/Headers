@interface CRKChunkedFile : NSObject {
    int mFileDescriptor;
}

+ (long long)preferredChunkSizeForFileDescriptor:(int)a0;
+ (void)assertFileDescriptorIsValid:(int)a0;

- (id)initWithFileDescriptor:(int)a0;
- (id)init;
- (long long)readNextChunkIntoBuffer:(id)a0 error:(id *)a1;

@end
