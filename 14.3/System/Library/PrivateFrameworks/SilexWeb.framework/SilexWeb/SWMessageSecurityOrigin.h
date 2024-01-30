@class NSString, NSURLRequest;

@interface SWMessageSecurityOrigin : NSObject <SWMessageSecurityOrigin>

@property (readonly, nonatomic) NSString *protocol;
@property (readonly, nonatomic) NSString *host;
@property (readonly, nonatomic) NSURLRequest *request;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithProtocol:(id)a0 host:(id)a1 request:(id)a2;

@end
