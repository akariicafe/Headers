@class NSString;

@interface OspreyTTSService : OspreyChannel

@property (retain, nonatomic) NSString *deviceID;

+ (id)sharedInstance;
+ (id)ospreyServiceEndpointURL;

- (id)init;
- (void).cxx_destruct;
- (void)roundTripTTS:(id)a0 responseHandler:(id /* block */)a1;
- (void)streamTTS:(id)a0 beginHandler:(id /* block */)a1 chunkHandler:(id /* block */)a2 endHandler:(id /* block */)a3 completion:(id /* block */)a4;

@end
