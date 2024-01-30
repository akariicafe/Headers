@class NSMutableData;

@interface SAMutableDataOutputStream : SAOutputStream {
    NSMutableData *_outputData;
}

- (int)appendData:(id)a0;
- (void).cxx_destruct;
- (BOOL)hasSpaceAvailable;
- (long long)write:(const char *)a0 maxLength:(unsigned long long)a1;

@end
