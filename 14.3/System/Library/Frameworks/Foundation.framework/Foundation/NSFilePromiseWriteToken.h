@class NSURL;

@interface NSFilePromiseWriteToken : NSObject

@property (copy) NSURL *promiseURL;
@property (copy) NSURL *logicalURL;

- (void)dealloc;

@end
