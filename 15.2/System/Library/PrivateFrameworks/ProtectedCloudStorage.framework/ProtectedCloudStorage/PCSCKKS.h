@class NSOperationQueue, NSString;

@interface PCSCKKS : NSObject

@property struct _PCSIdentitySetData { } *set;
@property (retain) NSOperationQueue *queue;
@property (retain) NSString *dsid;

- (id)syncViewOperation:(id)a0;
- (void)createNewIdentity:(id)a0 roll:(BOOL)a1 sync:(BOOL)a2 complete:(id /* block */)a3;
- (id)createIdentityOperation:(id)a0;
- (id)stripOperationErrorIfPCSError:(id)a0;
- (void)submitRequest:(id)a0 complete:(id /* block */)a1;
- (void).cxx_destruct;
- (BOOL)shouldRetryWithSync:(id)a0;
- (void)createIdentity:(id)a0 complete:(id /* block */)a1;
- (id)initWithIdentitySet:(struct _PCSIdentitySetData { } *)a0 dsid:(id)a1;
- (void)dealloc;
- (id)ensurePCSFieldsOperation:(id)a0;
- (id)fetchCurrentOperation:(id)a0;
- (id)initWithIdentitySet:(struct _PCSIdentitySetData { } *)a0 dsid:(id)a1 queue:(id)a2;

@end
