@class NSString;

@interface _MFDADeferredModifyMailboxOperation : _MFOfflineCacheOperation {
    NSString *_folderID;
    NSString *_newParentFolderID;
    NSString *_newDisplayName;
}

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithFolderID:(id)a0 newParentFolderID:(id)a1 newDisplayName:(id)a2;
- (BOOL)translateToLocalActionWithConnection:(id)a0;

@end
