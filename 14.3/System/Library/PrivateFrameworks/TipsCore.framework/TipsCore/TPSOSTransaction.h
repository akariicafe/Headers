@class NSObject;
@protocol OS_os_transaction;

@interface TPSOSTransaction : NSObject

@property (readonly, nonatomic) NSObject<OS_os_transaction> *transaction;
@property (readonly, nonatomic) double creationTime;

+ (id)transactionWithName:(id)a0;

- (void)endTransaction;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithTransactionName:(id)a0;

@end
