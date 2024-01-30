@class BRCLocalVersion, BRCLocalItem, CKRecordID, NSString, BRCServerZone, BRCNotification;

@interface BRCListNonLocalVersionsOperation : _BRCOperation <BRCOperationSubclass>

@property (retain, nonatomic) BRCLocalItem *item;
@property (retain, nonatomic) CKRecordID *recordID;
@property (retain, nonatomic) CKRecordID *shareID;
@property (retain, nonatomic) BRCServerZone *serverZone;
@property (retain, nonatomic) BRCLocalVersion *currentVersion;
@property (retain, nonatomic) BRCNotification *notification;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
