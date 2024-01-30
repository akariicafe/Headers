@class NSUUID, NSURL, TSUSafeSaveAssistant;

@interface TSPSupportSaveOperationState : NSObject

@property (readonly, nonatomic) NSUUID *originalDocumentUUID;
@property (readonly, nonatomic) NSUUID *originalVersionUUID;
@property (copy, nonatomic) NSURL *originalURL;
@property (readonly, nonatomic) BOOL shouldUpdate;
@property (readonly, nonatomic) BOOL isSavingCurrentDocument;
@property (readonly, nonatomic) BOOL isSameDocumentUpdate;
@property (readonly, nonatomic) long long updateType;
@property (retain, nonatomic) TSUSafeSaveAssistant *safeSaveAssistant;
@property (copy, nonatomic) NSUUID *documentUUID;
@property (copy, nonatomic) NSURL *URL;
@property (nonatomic) BOOL didWriteSupportBundleSuccessfuly;
@property (nonatomic) BOOL shouldLeavePendingEndSave;

- (id)init;
- (void).cxx_destruct;
- (id)initWithOriginalDocumentUUID:(id)a0 originalVersionUUID:(id)a1 originalURL:(id)a2 updateType:(long long)a3;

@end
