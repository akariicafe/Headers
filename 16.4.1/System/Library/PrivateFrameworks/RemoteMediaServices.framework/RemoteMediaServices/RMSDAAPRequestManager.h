@class NSString, RMSFairPlaySession, NSURLSession;
@protocol RMSDAAPRequestManagerDelegate;

@interface RMSDAAPRequestManager : NSObject {
    NSURLSession *_urlSession;
}

@property (copy, nonatomic) NSString *hostName;
@property (copy, nonatomic) NSString *pairingGUID;
@property (copy, nonatomic) NSString *homeSharingGroupKey;
@property (nonatomic) long long sessionIdentifier;
@property (nonatomic) long long port;
@property (weak, nonatomic) id<RMSDAAPRequestManagerDelegate> delegate;
@property (retain, nonatomic) RMSFairPlaySession *fairPlaySession;

- (id)init;
- (void).cxx_destruct;
- (id)requestControlCommand:(id)a0 text:(id)a1 promptRevision:(long long)a2 completionHandler:(id /* block */)a3;
- (id)requestWithPath:(id)a0 method:(id)a1 postData:(id)a2 queryArgs:(id)a3 completionHandler:(id /* block */)a4;

@end
