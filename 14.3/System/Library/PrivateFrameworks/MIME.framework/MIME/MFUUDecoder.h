@interface MFUUDecoder : MFBaseFilterDataConsumer {
    unsigned long long _begin;
    unsigned long long _end;
    unsigned long long _length;
    unsigned long long _readBytes;
    unsigned char _encoded[4];
    BOOL _beginComplete;
    BOOL _dataComplete;
    BOOL _validLength;
    BOOL _lineComplete;
    BOOL _passthrough;
}

- (long long)appendData:(id)a0;
- (void)done;

@end
