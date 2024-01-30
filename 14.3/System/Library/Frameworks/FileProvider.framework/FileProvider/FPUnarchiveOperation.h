@class NSFileCoordinator, NSString, FPItem, NSURL, FPItemID;

@interface FPUnarchiveOperation : FPActionOperation <FPArchiveServiceUnarchivingDelegate> {
    FPItem *_item;
    NSURL *_itemURL;
    FPItemID *_placeholderID;
    FPItem *_destinationFolder;
    BOOL _hasStitchedUnarchivedItems;
    NSFileCoordinator *_coordinator;
    id _coordinationAccessToken;
}

@property (copy, nonatomic) id /* block */ passphraseRequestBlock;
@property (copy, nonatomic) id /* block */ unarchiveCompletionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (void)actionMain;
- (id)_newParentProgressWithCompletedUnitCount:(long long)a0;
- (void)_completeWithItemURL:(id)a0 item:(id)a1 service:(id)a2 resultURL:(id)a3 error:(id)a4;
- (BOOL)_handleArchiveDecryptionError:(id)a0 item:(id)a1 service:(id)a2 itemURL:(id)a3;
- (void)__completeWithItem:(id)a0 service:(id)a1 resultURL:(id)a2 error:(id)a3;
- (BOOL)getHasUnarchivedMultipleItems:(BOOL *)a0 firstUnarchivedItemURL:(id *)a1 forArchiveFolderURL:(id)a2 error:(id *)a3;
- (void)service:(id)a0 didReceiveArchivedItemsDescriptors:(id)a1;
- (id)initWithItem:(id)a0 destinationFolder:(id)a1;

@end
