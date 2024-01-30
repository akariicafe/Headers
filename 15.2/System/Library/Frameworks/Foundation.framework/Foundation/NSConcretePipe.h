@class NSFileHandle;

@interface NSConcretePipe : NSPipe {
    NSFileHandle *_readHandle;
    NSFileHandle *_writeHandle;
}

- (void)_closeOnDealloc;
- (id)fileHandleForReading;
- (id)init;
- (id)fileHandleForWriting;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;

@end
