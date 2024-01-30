@class NSData, LAContext, TKSharedResource;

@interface TKAuthContext : NSObject

@property (readonly, nonatomic) LAContext *authContext;
@property (readonly, nonatomic) NSData *ACMHandle;
@property (readonly, nonatomic) TKSharedResource *sharedResource;

- (void).cxx_destruct;
- (id)initWithLAContext:(id)a0 ACMHandle:(id)a1 sharedResource:(id)a2;

@end
