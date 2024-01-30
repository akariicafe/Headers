@class CKXBackingStore;

@interface CKXProxyBase : NSObject

@property (readonly, weak, nonatomic) CKXBackingStore *backingStore;
@property (nonatomic) long long scope;
@property (readonly, nonatomic) BOOL committed;

- (BOOL)isMutable;
- (BOOL)cached;
- (void)commit;
- (void).cxx_destruct;
- (id)_init;
- (void)reset;
- (void)associateWithBackingStore:(id)a0;

@end
