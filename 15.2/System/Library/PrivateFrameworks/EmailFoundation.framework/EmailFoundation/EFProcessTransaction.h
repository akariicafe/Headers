@class NSObject;
@protocol OS_os_transaction;

@interface EFProcessTransaction : NSObject {
    NSObject<OS_os_transaction> *_transaction;
}

+ (id)log;
+ (id)transactionWithDescription:(id)a0;

- (id)initWithDescription:(id)a0;
- (BOOL)extend;
- (id)description;
- (void).cxx_destruct;
- (void)invalidate;

@end
