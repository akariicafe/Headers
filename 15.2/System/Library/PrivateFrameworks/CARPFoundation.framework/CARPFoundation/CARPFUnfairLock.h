@interface CARPFUnfairLock : CARPFObject <CARPFLocking>

@property (readonly) unsigned long long options;

+ (id)lock;
+ (id)lockWithOptions:(unsigned long long)a0;

- (void)unlock;
- (void)performBlock:(id /* block */)a0;
- (void)assertNotOwner;
- (id)initWithOptions:(unsigned long long)a0;
- (void)lock;
- (void)assertOwner;
- (id)init;

@end
