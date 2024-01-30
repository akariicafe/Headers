@class NSString;

@interface _MFDADeferredDeleteMailboxOperation : _MFOfflineCacheOperation {
    NSString *_folderID;
}

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)translateToLocalActionWithConnection:(id)a0;

@end
