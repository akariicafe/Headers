@class NSString, NSObject;
@protocol OS_os_transaction;

@interface HKDaemonTransaction : NSObject {
    NSObject<OS_os_transaction> *_transaction;
}

@property (readonly, copy, nonatomic) NSString *name;

+ (id)transactionWithName:(id)a0;
+ (id)transactionWithOwner:(id)a0;
+ (id)transactionWithOwner:(id)a0 activityName:(id)a1;

- (id)_initWithName:(id)a0;
- (void)dealloc;
- (id)init;
- (void)invalidate;
- (void).cxx_destruct;

@end
