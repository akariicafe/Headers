@class NSData, SLRequestMultiPart;

@interface SLRequestMultiPartInputStream : NSInputStream {
    SLRequestMultiPart *_multiPart;
    unsigned long long _streamStatus;
    unsigned long long _bytesReadInState;
    unsigned long long _totalBytesRead;
    NSData *_srcData;
    int _currentState;
}

- (BOOL)hasBytesAvailable;
- (BOOL)getBuffer:(char **)a0 length:(unsigned long long *)a1;
- (unsigned long long)length;
- (void)open;
- (long long)read:(char *)a0 maxLength:(unsigned long long)a1;
- (void)transitionState;
- (void)close;
- (void).cxx_destruct;
- (long long)currentStateRead:(char *)a0 maxLength:(unsigned long long)a1;
- (id)initWithMultiPart:(id)a0;
- (unsigned long long)readStateSourceData:(id)a0 toBuffer:(char *)a1 offset:(unsigned long long)a2 maxLength:(unsigned long long)a3;

@end
