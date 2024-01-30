@class NSError, NSOutputStream;

@interface _NSJSONWriter : NSObject {
    NSOutputStream *outputStream;
    int kind;
    char *dataBuffer;
    unsigned long long dataBufferLen;
    unsigned long long dataLen;
    BOOL freeDataBuffer;
    char *tempBuffer;
    unsigned long long tempBufferLen;
    long long totalDataWritten;
}

@property (retain) NSError *failure;

- (id)init;
- (long long)writeRootObject:(id)a0 toStream:(id)a1 options:(unsigned long long)a2;
- (void)dealloc;
- (id)dataWithRootObject:(id)a0 options:(unsigned long long)a1;
- (BOOL)appendString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

@end
