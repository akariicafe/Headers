@class NSFileHandle;

@interface NSConcretePipe : NSPipe {
    NSFileHandle *_readHandle;
    NSFileHandle *_writeHandle;
}

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)fileHandleForWriting;
- (id)fileHandleForReading;
- (void)dealloc;
- (void)_closeOnDealloc;

@end
