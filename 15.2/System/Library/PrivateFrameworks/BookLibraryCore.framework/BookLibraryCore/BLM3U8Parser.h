@class NSString, NSData, NSMutableData, NSError;
@protocol BLM3U8ParserDelegate;

@interface BLM3U8Parser : NSObject <NSURLSessionDataDelegate>

@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSMutableData *bytes;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSMutableData *collectedData;
@property (weak, nonatomic) id<BLM3U8ParserDelegate> delegate;
@property (nonatomic) BOOL collectForRewrite;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithURL:(id)a0;
- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (BOOL)parseWithError:(id *)a0;
- (BOOL)rewriteWithURL:(id)a0;
- (unsigned long long)consumeBytes:(const void *)a0 length:(unsigned long long)a1;
- (void)processLine;
- (id)parseAttributeList:(id)a0;
- (void)saveLine:(id)a0;

@end
