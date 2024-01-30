@class NSData, NSDictionary, TransparencyNetworkRequest;

@interface TransparencyResponse : NSObject

@property (retain) TransparencyNetworkRequest *request;
@property (retain) NSData *data;
@property (retain) NSDictionary *metadata;

- (id)initWithRequest:(id)a0 responseData:(id)a1 metadata:(id)a2;
- (id)serverHint;
- (void).cxx_destruct;

@end
