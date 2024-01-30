@class AMSBag;

@interface AABridgedMescalSigner : NSObject

@property (retain, nonatomic) AMSBag *bag;

- (id)init;
- (id)signatureWithData:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
