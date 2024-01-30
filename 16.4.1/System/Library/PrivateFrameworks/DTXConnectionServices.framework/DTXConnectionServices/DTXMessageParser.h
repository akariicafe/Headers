@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, DTXBlockCompressor;

@interface DTXMessageParser : NSObject {
    const char *_parsingBuffer;
    unsigned long long _parsingBufferUsed;
    unsigned long long _parsingBufferSize;
    id /* block */ _exceptionHandler;
    id /* block */ _parsedMessageHandler;
    BOOL _eof;
    NSObject<OS_dispatch_queue> *_parsingQueue;
    NSMutableDictionary *_fragmentedBuffersByIdentifier;
    id<DTXBlockCompressor> _compressor;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)parsingComplete;
- (void)_messageParsedWithHeader:(struct DTXMessageHeader { unsigned int x0; unsigned int x1; unsigned short x2; unsigned short x3; unsigned int x4; struct DTXMessageRoutingInfo { unsigned int x0; unsigned int x1; unsigned int x2; unsigned char x3 : 1; unsigned int x4 : 31; } x5; })a0 bytes:(const void *)a1 length:(unsigned long long)a2 destructor:(id /* block */)a3;
- (id)initWithMessageHandler:(id /* block */)a0 andParseExceptionHandler:(id /* block */)a1;
- (void)parseIncomingBytes:(const char *)a0 length:(unsigned long long)a1;
- (void)replaceCompressor:(id)a0;

@end
