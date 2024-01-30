@protocol DBEnvironment;

@interface DBFolderController : SBRootFolderController

@property (weak, nonatomic) id<DBEnvironment> environment;

+ (Class)listViewClass;
+ (Class)_contentViewClass;

- (void).cxx_destruct;
- (BOOL)hasDock;

@end
