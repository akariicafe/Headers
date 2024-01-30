@class CKXBackingStore;

@interface CKXProxyBase : NSObject

@property (readonly, weak, nonatomic) CKXBackingStore *backingStore;
@property (nonatomic) long long scope;
@property (readonly, nonatomic) BOOL committed;

- (void)commit;
- (id)_init;
- (BOOL)isMutable;
- (void).cxx_destruct;
- (void)reset;
- (void)associateWithBackingStore:(id)a0;

@end
