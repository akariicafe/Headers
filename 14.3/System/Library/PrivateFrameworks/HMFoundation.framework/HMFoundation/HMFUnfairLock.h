@interface HMFUnfairLock : HMFObject <HMFLocking>

@property (readonly) unsigned long long options;

+ (id)lock;
+ (id)lockWithOptions:(unsigned long long)a0;

- (id)initWithOptions:(unsigned long long)a0;
- (void)unlock;
- (void)performBlock:(id /* block */)a0;
- (void)lock;
- (id)init;
- (void)assertOwner;
- (void)assertNotOwner;

@end
