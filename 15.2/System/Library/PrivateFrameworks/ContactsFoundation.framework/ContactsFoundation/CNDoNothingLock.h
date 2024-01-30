@interface CNDoNothingLock : NSObject <NSLocking>

- (void)unlock;
- (void)lock;

@end
