@class NSData;

@interface DEHmac : NSObject <DEWriter>

@property (nonatomic) struct { unsigned int ctx[96]; } context;
@property (retain, nonatomic) NSData *hmac;

+ (BOOL)verify:(id)a0 computed:(id)a1;

- (void)writeData:(id)a0;
- (void)close;
- (void).cxx_destruct;
- (id)initWithKey:(id)a0 iv:(id)a1;

@end
