@interface ICDelegationConsumerServiceSessionRequestInfo : NSObject

@property (readonly, nonatomic) unsigned long long accountID;
@property (readonly, nonatomic) unsigned long long fairPlaySessionID;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithAccountID:(unsigned long long)a0 fairPlaySessionID:(unsigned long long)a1;

@end
