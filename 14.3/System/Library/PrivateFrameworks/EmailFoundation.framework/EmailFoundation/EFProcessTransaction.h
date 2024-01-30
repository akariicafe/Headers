@class NSObject;
@protocol OS_os_transaction;

@interface EFProcessTransaction : NSObject {
    NSObject<OS_os_transaction> *_transaction;
}

+ (id)log;
+ (id)transactionWithDescription:(id)a0;

- (id)initWithDescription:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (BOOL)extend;
- (void)invalidate;

@end
