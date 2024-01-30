@class NSString, NSObject;
@protocol OS_os_transaction;

@interface _CNOSTransactionInhibitor : CNInhibitor

@property (readonly, copy, nonatomic) NSString *label;
@property (readonly, nonatomic) NSObject<OS_os_transaction> *transaction;

- (void).cxx_destruct;
- (void)stop;
- (id)initWithLabel:(id)a0;
- (void)start;

@end
