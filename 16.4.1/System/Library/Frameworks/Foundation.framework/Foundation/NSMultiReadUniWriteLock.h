@interface NSMultiReadUniWriteLock : NSObject <NSLocking> {
    void *_priv;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void)lock;
- (void)unlock;
- (void)dealloc;
- (id)init;
- (void)setName:(id)a0;
- (id)description;
- (id)name;
- (void)lockForReading;
- (BOOL)lockForReadingBeforeDate:(id)a0;
- (void)lockForWriting;
- (BOOL)lockForWritingBeforeDate:(id)a0;
- (BOOL)tryLockForReading;
- (BOOL)tryLockForWriting;

@end
