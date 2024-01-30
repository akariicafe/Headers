@class NSString, CKRecordID;

@interface BRCSharingCopyAccessTokenOperation : _BRCFrameworkOperation <BRCOperationSubclass>

@property (retain, nonatomic) CKRecordID *recordID;
@property (retain, nonatomic) CKRecordID *shareID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
