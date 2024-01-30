@class NSString, TVRMSFairPlaySession, NSURLSession;
@protocol TVRMSDAAPRequestManagerDelegate;

@interface TVRMSDAAPRequestManager : NSObject {
    NSURLSession *_urlSession;
}

@property (copy, nonatomic) NSString *hostName;
@property (copy, nonatomic) NSString *pairingGUID;
@property (copy, nonatomic) NSString *homeSharingGroupKey;
@property (nonatomic) long long sessionIdentifier;
@property (nonatomic) long long port;
@property (weak, nonatomic) id<TVRMSDAAPRequestManagerDelegate> delegate;
@property (retain, nonatomic) TVRMSFairPlaySession *fairPlaySession;

- (id)init;
- (void).cxx_destruct;
- (id)requestControlCommand:(id)a0 text:(id)a1 data:(id)a2 controlValue:(long long)a3 promptRevision:(long long)a4 completionHandler:(id /* block */)a5;
- (id)requestControlCommand:(id)a0 text:(id)a1 promptRevision:(long long)a2 completionHandler:(id /* block */)a3;
- (id)requestWithPath:(id)a0 method:(id)a1 postData:(id)a2 queryArgs:(id)a3 completionHandler:(id /* block */)a4;

@end
