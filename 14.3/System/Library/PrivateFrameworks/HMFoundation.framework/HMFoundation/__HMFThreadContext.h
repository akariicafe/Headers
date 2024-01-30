@class NSThread, NSObject;
@protocol OS_voucher;

@interface __HMFThreadContext : HMFObject

@property (class, readonly, copy) __HMFThreadContext *currentContext;

@property (readonly) NSThread *thread;
@property (nonatomic) unsigned long long count;
@property (retain, nonatomic) NSObject<OS_voucher> *voucher;
@property (nonatomic) BOOL shouldRestoreVoucher;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)__init;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
