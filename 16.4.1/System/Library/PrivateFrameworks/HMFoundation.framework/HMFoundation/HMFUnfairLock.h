@interface HMFUnfairLock : HMFObject <HMFLocking>

@property (readonly) unsigned long long options;

+ (id)lock;
+ (id)lockWithOptions:(unsigned long long)a0;

- (void)lock;
- (void)unlock;
- (void)assertNotOwner;
- (void)performBlock:(id /* block */)a0;
- (void)assertOwner;
- (id)init;
- (id)initWithOptions:(unsigned long long)a0;

@end
