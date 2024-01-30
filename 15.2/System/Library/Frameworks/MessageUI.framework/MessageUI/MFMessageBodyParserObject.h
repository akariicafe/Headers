@interface MFMessageBodyParserObject : NSObject {
    double _timeoutTime;
    BOOL _shouldAbort;
    BOOL _didTimeout;
    BOOL _copyBlocks;
}

@property (nonatomic) double timeoutInterval;

- (void)abortParsing;
- (BOOL)shouldProceedParsing;
- (void)copyBlocks;
- (void)messageBodyParserWillBeginParsing:(id)a0;
- (BOOL)areBlocksCopied;

@end
