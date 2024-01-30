@class NSString;

@interface _MFDADeferredDeleteMailboxOperation : _MFOfflineCacheOperation {
    NSString *_folderID;
}

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)translateToLocalActionWithConnection:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
