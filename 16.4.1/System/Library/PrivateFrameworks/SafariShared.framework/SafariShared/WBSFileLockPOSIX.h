@interface WBSFileLockPOSIX : NSObject <WBSFileLock> {
    int _fileDescriptor;
}

- (void)dealloc;
- (void)releaseLock;
- (id)initWithFileDescriptor:(int)a0;

@end
