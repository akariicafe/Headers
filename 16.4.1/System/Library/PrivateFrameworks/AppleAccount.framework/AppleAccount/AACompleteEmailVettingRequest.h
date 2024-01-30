@class NSString;

@interface AACompleteEmailVettingRequest : AAEmailVettingRequest {
    NSString *_token;
}

+ (Class)responseClass;

- (id)initWithAccount:(id)a0 token:(id)a1;
- (id)urlString;
- (void).cxx_destruct;
- (id)bodyDictionary;
- (id)initWithURLString:(id)a0 account:(id)a1 token:(id)a2;

@end
