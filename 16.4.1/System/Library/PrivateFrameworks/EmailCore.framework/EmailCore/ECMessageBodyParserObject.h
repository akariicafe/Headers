@interface ECMessageBodyParserObject : NSObject {
    double _timeoutTime;
    BOOL _shouldAbort;
    BOOL _didTimeout;
}

@property (nonatomic) double timeoutInterval;

- (void)abortParsing;
- (void)messageBodyParserWillBeginParsing:(id)a0;
- (BOOL)shouldProceedParsing;

@end
