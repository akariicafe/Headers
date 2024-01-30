@interface WBSFileLockPOSIX : NSObject <WBSFileLock> {
    int _fileDescriptor;
}

- (id)initWithFileDescriptor:(int)a0;
- (void)dealloc;
- (void)releaseLock;

@end
