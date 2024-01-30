@class NSFileManager;

@interface CNFileManager : NSObject

@property (readonly, nonatomic) NSFileManager *fileManager;

- (id)initWithFileManager:(id)a0;
- (id)createDirectoryAtURL:(id)a0 withIntermediateDirectories:(BOOL)a1 attributes:(id)a2;
- (id)init;
- (void).cxx_destruct;

@end
