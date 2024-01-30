@class CNPromise;
@protocol DonationAgentProtocol;

@interface _CNDonationAgentXPCMethodScope : NSObject

@property (readonly, nonatomic) id<DonationAgentProtocol> proxy;
@property (readonly, nonatomic) CNPromise *promise;

- (void).cxx_destruct;
- (id)init;
- (id)initWithConnection:(id)a0 promise:(id)a1 proxy:(id)a2;
- (id)initWithPromise:(id)a0 proxy:(id)a1;

@end
