@class NSString;

@interface MKGETStatusRouter : NSObject <MKHTTPRouter>

@property (nonatomic) long long state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)server:(id)a0 didReceiveRequest:(id)a1 response:(id)a2;

@end
