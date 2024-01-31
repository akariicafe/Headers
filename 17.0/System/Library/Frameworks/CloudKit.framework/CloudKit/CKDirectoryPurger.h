@class NSArray;

@interface CKDirectoryPurger : NSObject

@property (readonly, copy, nonatomic) NSArray *urls;
@property (copy, nonatomic) id /* block */ shouldSkipFileBlock;
@property (copy, nonatomic) id /* block */ shouldRemoveFileBlock;

+ (void)purgeDirectoryAtURL:(id)a0;

- (void)purge;
- (id)initWithDirectoryURLs:(id)a0;
- (void).cxx_destruct;

@end
