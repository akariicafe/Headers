@class NSDictionary, SSVFairPlaySAPSession, SSURLBag;

@interface SSVComplexOperation : SSVOperation {
    SSVFairPlaySAPSession *_sapSession;
    SSURLBag *_urlBag;
    NSDictionary *_urlBagDictionary;
}

@property (readonly, copy) NSDictionary *URLBagDictionary;
@property (retain) SSVFairPlaySAPSession *SAPSession;

- (void)configureWithURLBagDictionary:(id)a0;
- (void)configureWithURLBag:(id)a0;
- (void).cxx_destruct;
- (id)newLoadURLOperationWithRequest:(id)a0;

@end
