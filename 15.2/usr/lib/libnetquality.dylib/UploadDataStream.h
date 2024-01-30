@interface UploadDataStream : NSInputStream {
    unsigned long long remainingLength;
    unsigned long long status;
}

- (id)initWithLength:(unsigned long long)a0;
- (void)close;
- (void)open;
- (void)scheduleInRunLoop:(id)a0 forMode:(id)a1;
- (void)setDelegate:(id)a0;
- (void)removeFromRunLoop:(id)a0 forMode:(id)a1;
- (BOOL)hasBytesAvailable;
- (id)delegate;
- (id)streamError;
- (long long)read:(char *)a0 maxLength:(unsigned long long)a1;
- (unsigned long long)streamStatus;
- (BOOL)getBuffer:(char **)a0 length:(unsigned long long *)a1;

@end
