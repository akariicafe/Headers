@class NSMutableArray, NSInputStream;
@protocol DKDAAPParserDelegate;

@interface DKDAAPParser : NSObject

@property (readonly, nonatomic) NSInputStream *inputStream;
@property (readonly, nonatomic) NSMutableArray *containerStack;
@property (nonatomic, getter=isCanceled) BOOL canceled;
@property (weak, nonatomic) id<DKDAAPParserDelegate> delegate;
@property (readonly, nonatomic) long long state;

- (id)initWithData:(id)a0;
- (void)_callDelegateDidParseDataCode:(unsigned int)a0 bytes:(char *)a1 contentLength:(unsigned int)a2;
- (void)parse;
- (id)initWithStream:(id)a0;
- (void)_callDelegateDidEndContainerCode:(unsigned int)a0;
- (void)_verifyExpectedEOF;
- (BOOL)_callDelegateShouldParseCode:(unsigned int)a0;
- (void)_callDelegateDidFailWithError:(id)a0;
- (void)_callDelegateDidStart;
- (void)cancel;
- (BOOL)_callDelegateShouldParseCodeAsContainer:(unsigned int)a0;
- (void)_callDelegateDidCancel;
- (void)_callDelegateDidStartContainerCode:(unsigned int)a0 contentLength:(unsigned int)a1;
- (void)_callDelegateDidFinish;
- (void).cxx_destruct;

@end
