@protocol NFLocking;

@interface FCMTWriterLock : NSObject <NFLocking> {
    id<NFLocking> _underlyingLock;
}

- (void)unlock;
- (void)lock;
- (id)initWithUnderlyingLock:(id)a0;
- (void).cxx_destruct;
- (void)performWriteSync:(id /* block */)a0;
- (id)init;
- (void)performReadSync:(id /* block */)a0;

@end
