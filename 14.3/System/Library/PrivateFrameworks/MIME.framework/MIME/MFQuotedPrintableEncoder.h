@interface MFQuotedPrintableEncoder : MFBaseFilterDataConsumer {
    unsigned long long _line;
    unsigned long long _matchedFrom;
    unsigned char _lastHorizontalWhitespace;
    BOOL _lastWasNewLine;
}

@property (nonatomic) BOOL forTextPart;
@property (nonatomic) BOOL forHeader;

+ (unsigned long long)requiredSizeToEncodeHeaderBytes:(const char *)a0 length:(unsigned long long)a1;

- (long long)appendData:(id)a0;
- (void)done;

@end
