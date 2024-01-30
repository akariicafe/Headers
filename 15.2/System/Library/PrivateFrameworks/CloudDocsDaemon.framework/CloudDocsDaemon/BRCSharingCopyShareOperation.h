@class BRCItemID, CKRecordID, NSString, BRCClientZone;

@interface BRCSharingCopyShareOperation : _BRCFrameworkOperation <BRCOperationSubclass>

@property (retain, nonatomic) BRCItemID *rootItemIDToLookup;
@property (retain, nonatomic) BRCClientZone *clientZone;
@property (retain, nonatomic) CKRecordID *shareID;
@property (retain, nonatomic) CKRecordID *recordIDNeedingFetch;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithItem:(id)a0;
- (void)main;
- (void).cxx_destruct;
- (id)createActivity;
- (void)fetchRootURLIfNecessaryAndFinishWithShare:(id)a0;

@end
