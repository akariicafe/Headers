@class NSObject;
@protocol OS_os_transaction;

@interface CRKOSTransactionToken : NSObject <CRKCancelable>

@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) NSObject<OS_os_transaction> *underlyingTransaction;

- (void)cancel;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithReason:(id)a0 completionHandler:(id /* block */)a1;

@end
