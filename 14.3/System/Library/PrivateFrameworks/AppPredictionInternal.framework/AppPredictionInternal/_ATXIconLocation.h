@class NSIndexPath;

@interface _ATXIconLocation : NSObject

@property (readonly, nonatomic) BOOL isOnDock;
@property (readonly, nonatomic) BOOL appearOnlyInAppLibrary;
@property (readonly, nonatomic) BOOL isInstalled;
@property (readonly, nonatomic) NSIndexPath *indexPath;

- (id)initWithIndexPath:(id)a0 isOnDock:(BOOL)a1 existsInAppLibraryOnly:(BOOL)a2 isInstalled:(BOOL)a3;
- (void).cxx_destruct;

@end
