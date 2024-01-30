@class NSObject;
@protocol OS_os_transaction;

@interface TPSOSTransaction : NSObject

@property (readonly, nonatomic) NSObject<OS_os_transaction> *transaction;
@property (readonly, nonatomic) double creationTime;

+ (id)transactionWithName:(id)a0;

- (void)endTransaction;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithTransactionName:(id)a0;

@end
