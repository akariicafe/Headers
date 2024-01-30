@interface ICDelegationConsumerServiceSessionRequestInfo : NSObject

@property (readonly, nonatomic) unsigned long long accountID;
@property (readonly, nonatomic) unsigned long long fairPlaySessionID;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithAccountID:(unsigned long long)a0 fairPlaySessionID:(unsigned long long)a1;

@end
