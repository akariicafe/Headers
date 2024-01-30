@class NSString, CKContainer;

@interface MLCloudSession : NSObject

@property (retain, nonatomic) NSString *serviceName;
@property (retain, nonatomic) CKContainer *container;
@property (readonly, copy, nonatomic) NSString *teamIdentifier;

- (id)initWithTeamIdentifier:(id)a0;
- (id)fetchKeyResponseFromServerForKeyID:(id)a0 signedKeyRequest:(id)a1 error:(id *)a2;
- (void).cxx_destruct;

@end
