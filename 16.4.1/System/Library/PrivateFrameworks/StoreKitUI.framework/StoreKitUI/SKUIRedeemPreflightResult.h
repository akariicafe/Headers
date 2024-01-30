@class SSVRedeemCodeMetadata, SKUIRedeemConfiguration, SKUIClientContext, NSError, SSAccount;

@interface SKUIRedeemPreflightResult : NSObject

@property (retain, nonatomic) SSAccount *account;
@property (retain, nonatomic) SKUIClientContext *clientContext;
@property (retain, nonatomic) SSVRedeemCodeMetadata *codeMetadata;
@property (copy, nonatomic) NSError *error;
@property (retain, nonatomic) SKUIRedeemConfiguration *redeemConfiguration;
@property (nonatomic) long long resultType;

- (void).cxx_destruct;

@end
