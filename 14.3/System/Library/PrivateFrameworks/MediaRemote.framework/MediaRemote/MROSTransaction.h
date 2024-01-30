@class NSString, NSObject;
@protocol OS_os_transaction;

@interface MROSTransaction : NSObject {
    NSObject<OS_os_transaction> *_containedTransaction;
}

@property (readonly, nonatomic) NSString *transactionName;

- (void).cxx_destruct;
- (void)invalidateTransaction;
- (id)description;
- (id)initWithName:(id)a0;

@end
