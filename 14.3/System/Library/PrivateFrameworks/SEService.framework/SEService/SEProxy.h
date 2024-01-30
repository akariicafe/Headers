@class NSString, NFSecureElementManagerSession;

@interface SEProxy : NSObject <SEProxyInterface>

@property (retain, nonatomic) NFSecureElementManagerSession *session;
@property (retain, nonatomic) NSString *seid;

- (void).cxx_destruct;
- (oneway void)transceive:(id)a0 callback:(id /* block */)a1;
- (id)initWithSession:(id)a0 seid:(id)a1;

@end
