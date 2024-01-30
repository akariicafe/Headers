@class NSObject;
@protocol OS_os_transaction, OS_dispatch_source;

@interface ANTransactionInfo : NSObject

@property (retain, nonatomic) NSObject<OS_os_transaction> *transaction;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (nonatomic) double expiration;

+ (id)infoWithTransaction:(id)a0;

- (void).cxx_destruct;

@end
