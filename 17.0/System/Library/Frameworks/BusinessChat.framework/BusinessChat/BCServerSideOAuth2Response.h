@class BCError, NSDictionary;

@interface BCServerSideOAuth2Response : NSObject <BCOAuth2ResponseProtocol>

@property (nonatomic) long long status;
@property (retain, nonatomic) BCError *error;
@property (readonly, nonatomic) NSDictionary *dictionaryValue;

- (void).cxx_destruct;
- (id)_initWithDictionary:(id)a0;
- (id)initWithRedirectURI:(id)a0;

@end
