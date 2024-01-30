@class TKSEPKey;

@interface TKSEPClientTokenObject : TKClientTokenObject

@property (readonly, nonatomic) TKSEPKey *key;

- (id)withError:(id *)a0 invoke:(id /* block */)a1;
- (id)initWithSession:(id)a0 key:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (id)operation:(long long)a0 data:(id)a1 algorithms:(id)a2 parameters:(id)a3 error:(id *)a4;
- (BOOL)deleteWithError:(id *)a0;

@end
