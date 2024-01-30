@interface MBFileManager : NSObject

+ (id)defaultManager;

- (BOOL)removeFileAtPath:(id)a0;
- (BOOL)fileExistsAtPath:(id)a0;
- (BOOL)createDirectoryAtPath:(id)a0 attributes:(id)a1;
- (id)directoryContentsAtPath:(id)a0;
- (id)fileAttributesAtPath:(id)a0 traverseLink:(BOOL)a1;
- (BOOL)copyPath:(id)a0 toPath:(id)a1;
- (BOOL)movePath:(id)a0 toPath:(id)a1;

@end
