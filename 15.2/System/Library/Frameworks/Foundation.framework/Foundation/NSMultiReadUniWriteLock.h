@interface NSMultiReadUniWriteLock : NSObject <NSLocking> {
    void *_priv;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void)unlock;
- (void)lock;
- (void)setName:(id)a0;
- (void)lockForReading;
- (void)lockForWriting;
- (BOOL)tryLockForReading;
- (BOOL)tryLockForWriting;
- (id)description;
- (BOOL)lockForReadingBeforeDate:(id)a0;
- (BOOL)lockForWritingBeforeDate:(id)a0;
- (id)init;
- (id)name;
- (void)dealloc;

@end
