@class NSData, NSString, NSDictionary, NSArray, NSError, SWPersonIdentityProof, SWPersonIdentity;

@interface SLPersonIdentityGenerator : NSObject {
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ keyQueryController;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;
- (void)generateLocalIdentityForDocumentIdentifier:(NSString *)a0 completionHandler:(void (^)(NSDictionary *, NSError *))a1;
- (void)generatePersonIdentitiesForHandles:(NSArray *)a0 documentIdentifier:(NSString *)a1 completionHandler:(void (^)(NSDictionary *, NSError *))a2;
- (void)generateProofForIdentity:(SWPersonIdentity *)a0 documentIdentifier:(NSString *)a1 completionHandler:(void (^)(SWPersonIdentityProof *, NSError *))a2;
- (void)signData:(NSData *)a0 documentIdentifier:(NSString *)a1 trackingPreventionSalt:(NSData *)a2 completionHandler:(void (^)(NSData *, NSError *))a3;

@end
