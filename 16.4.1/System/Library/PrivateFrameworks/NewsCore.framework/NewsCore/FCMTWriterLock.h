@protocol NFLocking;

@interface FCMTWriterLock : NSObject <NFLocking> {
    id<NFLocking> _underlyingLock;
}

- (void)performReadSync:(id /* block */)a0;
- (void)performWriteSync:(id /* block */)a0;
- (void)lock;
- (void)unlock;
- (id)init;
- (id)initWithUnderlyingLock:(id)a0;
- (void).cxx_destruct;

@end
