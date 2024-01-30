@class NSString, FPItemID, FPItem;

@interface FPCreateFolderOperation : FPActionOperation {
    FPItem *_parentItem;
    NSString *_folderFilename;
    FPItemID *_placeholderID;
}

@property (nonatomic) BOOL shouldBounceOnCollision;
@property (copy, nonatomic) id /* block */ createFolderCompletionBlock;

- (void).cxx_destruct;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (id)initWithParentItem:(id)a0 folderName:(id)a1;
- (void)actionMain;
- (void)presendNotifications;

@end
