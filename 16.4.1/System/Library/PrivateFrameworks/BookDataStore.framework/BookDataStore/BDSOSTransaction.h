@class NSObject;
@protocol OS_os_transaction;

@interface BDSOSTransaction : NSObject

@property (retain, nonatomic) NSObject<OS_os_transaction> *osTransaction;

- (void)endTransaction;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithTransactionName:(const char *)a0;

@end
