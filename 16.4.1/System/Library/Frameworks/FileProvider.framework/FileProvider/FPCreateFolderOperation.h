@class NSString, FPItemID, FPItem;

@interface FPCreateFolderOperation : FPActionOperation {
    FPItem *_parentItem;
    NSString *_folderFilename;
    FPItemID *_placeholderID;
}

@property (nonatomic) BOOL shouldBounceOnCollision;
@property (copy, nonatomic) id /* block */ createFolderCompletionBlock;

- (void)finishWithResult:(id)a0 error:(id)a1;
- (void).cxx_destruct;
- (void)actionMain;
- (id)initWithParentItem:(id)a0 folderName:(id)a1;
- (void)presendNotifications;

@end
