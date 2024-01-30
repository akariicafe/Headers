@protocol NFLocking;

@interface FCMTWriterLock : NSObject <NFLocking>

@property (retain, nonatomic) id<NFLocking> underlyingLock;

- (id)initWithUnderlyingLock:(id)a0;
- (void)unlock;
- (void)lock;
- (id)init;
- (void).cxx_destruct;
- (void)performReadSync:(id /* block */)a0;
- (void)performWriteSync:(id /* block */)a0;

@end
