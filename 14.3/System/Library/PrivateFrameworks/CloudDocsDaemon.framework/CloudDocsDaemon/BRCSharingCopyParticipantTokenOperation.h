@class NSString, CKRecordID, NSError;

@interface BRCSharingCopyParticipantTokenOperation : _BRCFrameworkOperation <BRCOperationSubclass> {
    CKRecordID *_shareID;
    CKRecordID *_contentRecordID;
    NSString *_participantKey;
    NSString *_baseToken;
    NSError *_error;
    BOOL _iWorkShareable;
    BOOL _isChildOfShare;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithItem:(id)a0;
- (void).cxx_destruct;
- (void)main;
- (id)createActivity;
- (void)_fetchBaseTokenWithCompletion:(id /* block */)a0;

@end
