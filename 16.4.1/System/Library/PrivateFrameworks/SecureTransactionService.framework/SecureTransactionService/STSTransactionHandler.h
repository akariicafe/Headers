@class STSSession;

@interface STSTransactionHandler : STSHandler

@property (readonly, weak, nonatomic) STSSession *parent;

- (id)initWithParent:(id)a0;
- (void).cxx_destruct;
- (id)stopTransaction;
- (id)startTransactionWithAuthorization:(id)a0 options:(unsigned long long)a1;

@end
