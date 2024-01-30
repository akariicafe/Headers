@class NSString, CKContainer;

@interface MLCloudSession : NSObject

@property (retain, nonatomic) NSString *serviceName;
@property (retain, nonatomic) CKContainer *container;
@property (readonly, copy, nonatomic) NSString *teamIdentifier;

- (void).cxx_destruct;
- (id)fetchKeyResponseFromServerForKeyID:(id)a0 signedKeyRequest:(id)a1 error:(id *)a2;
- (id)initWithTeamIdentifier:(id)a0;

@end
