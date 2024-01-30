@interface CRKChunkedFile : NSObject {
    int mFileDescriptor;
}

+ (void)assertFileDescriptorIsValid:(int)a0;
+ (long long)preferredChunkSizeForFileDescriptor:(int)a0;

- (id)init;
- (id)initWithFileDescriptor:(int)a0;
- (long long)readNextChunkIntoBuffer:(id)a0 error:(id *)a1;

@end
