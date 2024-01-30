@class NSString;
@protocol MKPOSTClientRouterDelegate;

@interface MKPOSTClientRouter : NSObject <MKHTTPRouter>

@property (weak, nonatomic) id<MKPOSTClientRouterDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)server:(id)a0 didReceiveRequest:(id)a1 response:(id)a2;

@end
