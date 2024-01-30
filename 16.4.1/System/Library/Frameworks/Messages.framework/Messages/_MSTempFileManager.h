@class NSHashTable;

@interface _MSTempFileManager : NSObject

@property (readonly, nonatomic) NSHashTable *registry;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)writeTemporaryFileWithData:(id)a0 type:(id)a1;

@end
