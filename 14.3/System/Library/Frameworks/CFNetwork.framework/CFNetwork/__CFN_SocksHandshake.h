@class NSString, NSDictionary;

@interface __CFN_SocksHandshake : NSObject {
    BOOL _finished;
    unsigned short _port;
    NSString *_host;
    NSDictionary *_credentials;
}

- (id)finish:(int)a0;
- (void).cxx_destruct;
- (BOOL)parse:(const char *)a0 len:(long long)a1 completion:(id /* block */)a2;

@end
