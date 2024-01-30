@class NSString, AFRequestInfo;

@interface AFRemoteRequest : NSObject

@property (readonly, nonatomic) AFRequestInfo *info;
@property (copy, nonatomic) NSString *peerIdentifier;

- (id)initWithInfo:(id)a0;
- (void)sendWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;

@end
