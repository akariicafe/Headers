@class NSObject;
@protocol OS_os_transaction;

@interface BDSOSTransaction : NSObject

@property (retain, nonatomic) NSObject<OS_os_transaction> *osTransaction;

- (void)endTransaction;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithTransactionName:(const char *)a0;

@end
