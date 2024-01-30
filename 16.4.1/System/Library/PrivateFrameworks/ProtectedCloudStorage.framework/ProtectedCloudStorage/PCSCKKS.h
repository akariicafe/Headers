@class NSString;

@interface PCSCKKS : NSObject

@property struct _PCSIdentitySetData { } *set;
@property (retain) NSString *dsid;

+ (BOOL)fetchWithTimeout:(unsigned long long)a0 error:(id *)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (void)createIdentity:(id)a0 complete:(id /* block */)a1;
- (id)createIdentityOperation:(id)a0;
- (void)createNewIdentity:(id)a0 roll:(BOOL)a1 sync:(BOOL)a2 complete:(id /* block */)a3;
- (id)ensurePCSFieldsOperation:(id)a0;
- (id)fetchCurrentOperation:(id)a0;
- (id)initWithIdentitySet:(struct _PCSIdentitySetData { } *)a0 dsid:(id)a1;
- (BOOL)shouldRetryWithSync:(id)a0;
- (id)stripOperationErrorIfPCSError:(id)a0;
- (void)submitRequest:(id)a0 complete:(id /* block */)a1;
- (id)syncViewOperation:(id)a0;

@end
