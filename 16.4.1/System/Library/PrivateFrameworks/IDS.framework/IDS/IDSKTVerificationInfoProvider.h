@class NSString;

@interface IDSKTVerificationInfoProvider : NSObject <KTVerificationInfoProvider>

@property (retain, nonatomic) NSString *applicationIdentifier;

- (id)initWithApplicationIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)fetchPeerVerificationInfos:(id)a0 completionBlock:(id /* block */)a1;
- (void)fetchSelfVerificationInfo:(id /* block */)a0;
- (void)healSelf:(id)a0 completionBlock:(id /* block */)a1;

@end
