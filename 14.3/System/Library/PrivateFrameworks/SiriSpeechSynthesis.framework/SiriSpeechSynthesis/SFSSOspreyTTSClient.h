@class NSString;

@interface SFSSOspreyTTSClient : OspreyChannel

@property (retain, nonatomic) NSString *deviceId;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)prewarm;
- (void)streamTTS:(id)a0 beginHandler:(id /* block */)a1 chunkHandler:(id /* block */)a2 endHandler:(id /* block */)a3 completion:(id /* block */)a4;

@end
