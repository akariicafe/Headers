@interface WBSFileLockPOSIX : NSObject <WBSFileLock> {
    int _fileDescriptor;
}

- (id)initWithFileDescriptor:(int)a0;
- (void)releaseLock;
- (void)dealloc;

@end
