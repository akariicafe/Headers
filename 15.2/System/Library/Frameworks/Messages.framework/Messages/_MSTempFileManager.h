@class NSHashTable;

@interface _MSTempFileManager : NSObject

@property (readonly, nonatomic) NSHashTable *registry;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (id)writeTemporaryFileWithData:(id)a0 type:(id)a1;

@end
