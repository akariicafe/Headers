@class NSString, NSDictionary, NSArray, BCError;

@interface BCNativeOAuth2Response : NSObject <BCOAuth2ResponseProtocol> {
    NSString *_token;
    NSArray *_errors;
}

@property (nonatomic) long long status;
@property (readonly, nonatomic) BCError *error;
@property (readonly, nonatomic) NSDictionary *dictionaryValue;

- (void).cxx_destruct;
- (id)initWithToken:(id)a0 error:(id)a1;

@end
