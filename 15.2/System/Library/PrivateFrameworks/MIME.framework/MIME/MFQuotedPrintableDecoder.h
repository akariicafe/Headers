@interface MFQuotedPrintableDecoder : MFBaseFilterDataConsumer {
    unsigned char _lastEncoded;
    unsigned long long _required;
    BOOL _badlyEncoded;
}

@property (nonatomic) BOOL forTextPart;

- (void)done;
- (long long)appendData:(id)a0;

@end
