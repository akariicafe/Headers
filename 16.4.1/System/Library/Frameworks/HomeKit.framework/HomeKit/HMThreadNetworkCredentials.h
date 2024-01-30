@class NSString, NSData;

@interface HMThreadNetworkCredentials : NSObject

@property (readonly, nonatomic) NSString *networkName;
@property (readonly, nonatomic) NSData *extendedPANID;
@property (readonly, nonatomic) NSString *commissionerPassphrase;
@property (readonly, nonatomic) NSData *PSKc;

- (void).cxx_destruct;
- (id)initWithNetworkName:(id)a0 extendedPANID:(id)a1 PSKc:(id)a2;
- (id)initWithNetworkName:(id)a0 extendedPANID:(id)a1 commissionerPassphrase:(id)a2;

@end
