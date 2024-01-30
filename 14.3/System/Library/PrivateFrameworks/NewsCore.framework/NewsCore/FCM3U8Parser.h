@class NSString, NSData, NSMutableData, NSError;
@protocol FCM3U8ParserDelegate;

@interface FCM3U8Parser : NSObject <NSURLSessionDataDelegate>

@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSMutableData *bytes;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSMutableData *collectedData;
@property (weak, nonatomic) id<FCM3U8ParserDelegate> delegate;
@property (nonatomic) BOOL collectForRewrite;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (void)processLine;
- (unsigned long long)consumeBytes:(const void *)a0 length:(unsigned long long)a1;
- (id)parseAttributeList:(id)a0;
- (BOOL)parseWithError:(id *)a0;
- (BOOL)rewriteWithURL:(id)a0;
- (id)initWithURL:(id)a0;
- (void)saveLine:(id)a0;

@end
