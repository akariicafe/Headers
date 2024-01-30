@class NSString;

@interface _MFDADeferredDeleteMailboxOperation : _MFOfflineCacheOperation {
    NSString *_folderID;
}

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)translateToLocalActionWithConnection:(id)a0;

@end
