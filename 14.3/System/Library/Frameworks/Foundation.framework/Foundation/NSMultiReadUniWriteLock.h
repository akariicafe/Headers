@interface NSMultiReadUniWriteLock : NSObject <NSLocking> {
    void *_priv;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void)unlock;
- (void)setName:(id)a0;
- (void)lock;
- (id)init;
- (void)dealloc;
- (void)lockForReading;
- (void)lockForWriting;
- (BOOL)lockForReadingBeforeDate:(id)a0;
- (BOOL)lockForWritingBeforeDate:(id)a0;
- (id)description;
- (BOOL)tryLockForReading;
- (BOOL)tryLockForWriting;
- (id)name;

@end
