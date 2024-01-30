@class NSMutableData;

@interface SAMutableDataOutputStream : SAOutputStream {
    NSMutableData *_outputData;
}

- (long long)write:(const char *)a0 maxLength:(unsigned long long)a1;
- (BOOL)hasSpaceAvailable;
- (int)appendData:(id)a0;
- (void).cxx_destruct;

@end
