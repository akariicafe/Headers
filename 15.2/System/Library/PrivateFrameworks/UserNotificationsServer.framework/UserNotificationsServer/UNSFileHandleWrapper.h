@class NSString, NSFileHandle;

@interface UNSFileHandleWrapper : NSObject

@property (retain, nonatomic) NSFileHandle *fileHandle;
@property (copy, nonatomic) NSString *path;

- (void).cxx_destruct;

@end
