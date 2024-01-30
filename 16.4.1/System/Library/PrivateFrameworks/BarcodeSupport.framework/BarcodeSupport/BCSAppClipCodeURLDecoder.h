@class BCSParsingServiceConnection;

@interface BCSAppClipCodeURLDecoder : NSObject {
    BCSParsingServiceConnection *_serviceConnection;
}

+ (id)sharedDecoder;

- (id)init;
- (void).cxx_destruct;
- (void)decodeURLWithEncodedData:(id)a0 codingVersion:(unsigned long long)a1 requiresAuthorization:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)parseEncodedURLData:(id)a0 version:(unsigned long long)a1 completion:(id /* block */)a2;

@end
