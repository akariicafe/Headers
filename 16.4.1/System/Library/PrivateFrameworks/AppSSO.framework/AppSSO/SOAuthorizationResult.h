@class NSHTTPURLResponse, NSDictionary, NSData, NSArray, SOAuthorizationResultCore;

@interface SOAuthorizationResult : NSObject {
    SOAuthorizationResultCore *_authorizationResultCore;
}

@property (retain, nonatomic) NSDictionary *httpAuthorizationHeaders;
@property (copy, nonatomic) NSHTTPURLResponse *httpResponse;
@property (retain, nonatomic) NSData *httpBody;
@property (retain, nonatomic) NSArray *privateKeys;

- (id)init;
- (void).cxx_destruct;
- (id)initWithHTTPAuthorizationHeaders:(id)a0;
- (id)initWithHTTPResponse:(id)a0 httpBody:(id)a1;

@end
