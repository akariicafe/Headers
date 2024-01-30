@class NSArray;

@interface CKDDirectoryPurger : NSObject

@property (retain, nonatomic) NSArray *paths;
@property (copy, nonatomic) id /* block */ shouldSkipFileBlock;
@property (copy, nonatomic) id /* block */ shouldRemoveFileBlock;

+ (void)purgeDirectoryAtPath:(id)a0;

- (void)purge;
- (void).cxx_destruct;
- (id)initWithPaths:(id)a0;

@end
