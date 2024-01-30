@class NSDictionary;
@protocol CATHTTPMessageParserDelegate;

@interface CATHTTPMessageParser : NSObject {
    struct __CFHTTPMessage { } *mCurrentMessage;
    NSDictionary *mCurrentHeaderFields;
    unsigned long long mCurrentBytesReceived;
}

@property (weak, nonatomic) id<CATHTTPMessageParserDelegate> delegate;

+ (id)encodeRequestData:(id)a0;
+ (id)responseHeaderForContentWithLength:(unsigned long long)a0;

- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)appendBytes:(const char *)a0 length:(unsigned long long)a1;
- (void)delegateDidReceiveRequestWithURL:(id)a0;
- (void)delegateDidReceiveRequestData:(id)a0;
- (void)delegateDidReceiveResponseData:(id)a0 moreComing:(BOOL)a1;

@end
