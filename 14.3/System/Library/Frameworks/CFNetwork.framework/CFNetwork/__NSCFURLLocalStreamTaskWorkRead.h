@class NSData;

@interface __NSCFURLLocalStreamTaskWorkRead : __NSCFURLLocalStreamTaskWork {
    unsigned int _minBytes;
    unsigned int _maxBytes;
    id /* block */ _completion;
    NSData *_readData;
    BOOL _eof;
}

- (void)dealloc;

@end
