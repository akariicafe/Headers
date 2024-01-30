@class NSObject;
@protocol OS_os_transaction;

@interface BLTTransaction : NSObject

@property (retain, nonatomic) NSObject<OS_os_transaction> *osTransaction;

+ (id)transactionWithDescription:(id)a0;

- (id)initWithDescription:(id)a0;
- (void).cxx_destruct;

@end
