@class NSString, NSObject;
@protocol OS_os_transaction;

@interface HKDaemonTransaction : NSObject {
    NSObject<OS_os_transaction> *_transaction;
}

@property (readonly, copy, nonatomic) NSString *name;

+ (id)transactionWithOwner:(id)a0;
+ (id)transactionWithOwner:(id)a0 activityName:(id)a1;
+ (id)transactionWithName:(id)a0;

- (id)_initWithName:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)invalidate;

@end
