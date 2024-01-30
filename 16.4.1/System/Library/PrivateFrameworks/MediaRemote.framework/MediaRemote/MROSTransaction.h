@class NSString, NSObject;
@protocol OS_os_transaction;

@interface MROSTransaction : NSObject {
    NSObject<OS_os_transaction> *_containedTransaction;
}

@property (readonly, nonatomic) NSString *transactionName;

- (void)invalidateTransaction;
- (id)initWithName:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
