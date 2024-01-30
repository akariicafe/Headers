@class NSArray;

@interface PUWarningHelper : NSObject

@property (retain, nonatomic, setter=_setAssets:) NSArray *_assets;

+ (id)_suffix:(id)a0;
+ (id)alertControllerForAssets:(id)a0 inCollection:(id)a1 cancelAction:(id /* block */)a2 removeAction:(id /* block */)a3 removeFromSharedLibraryAction:(id /* block */)a4 deleteAction:(id /* block */)a5;
+ (id)getCombinedRemovalDeletionWarningMessageForAssets:(id)a0 canRemoveFromSharedLibrary:(BOOL)a1 removeFromSharedLibraryOnly:(BOOL)a2;
+ (id)getRemovalWarningMessageForAssets:(id)a0 removeFromSharedLibraryOnly:(BOOL)a1;

- (void).cxx_destruct;

@end
