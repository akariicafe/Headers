@class NSFileHandle;

@interface NSPipe : NSObject

@property (readonly, retain) NSFileHandle *fileHandleForReading;
@property (readonly, retain) NSFileHandle *fileHandleForWriting;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)pipe;

- (void)_closeOnDealloc;
- (id)init;

@end
