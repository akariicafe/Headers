@class NSString, MCMClientIdentity, MCMUserIdentityCache;
@protocol MCMContainerFactory, MCMContainerCache;

@interface MCMContext : NSObject <MCMContext>

@property (readonly, nonatomic) MCMClientIdentity *clientIdentity;
@property (readonly, nonatomic) id<MCMContainerCache> containerCache;
@property (readonly, nonatomic) id<MCMContainerFactory> containerFactory;
@property (readonly, nonatomic) MCMUserIdentityCache *userIdentityCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)privileged;
+ (id)privilegedWithUserIdentity:(id)a0 userIdentityCache:(id)a1;

- (id)initWithClientIdentity:(id)a0 containerCache:(id)a1 containerFactory:(id)a2 userIdentityCache:(id)a3;
- (void).cxx_destruct;

@end
