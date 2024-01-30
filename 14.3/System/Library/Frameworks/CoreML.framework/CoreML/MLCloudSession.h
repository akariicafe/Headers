@class NSString, CKContainer;

@interface MLCloudSession : NSObject

@property (retain, nonatomic) NSString *serviceName;
@property (retain, nonatomic) CKContainer *container;
@property (readonly, copy, nonatomic) NSString *teamIdentifier;

- (void).cxx_destruct;
- (id)initWithTeamIdentifier:(id)a0;
- (void)invokeRPC:(id)a0 request:(id)a1 completionBlock:(id /* block */)a2;
- (id)fetchKeyResponseFromServerForKeyID:(id)a0 signedKeyRequest:(id)a1 error:(id *)a2;

@end
