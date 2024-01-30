@class NSString;

@interface MFDADeferredStoreDraftOperation : _MFOfflineCacheOperation {
    NSString *_messageIDHeader;
    NSString *_folderID;
}

+ (BOOL)supportsSecureCoding;
+ (id)log;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)translateToLocalActionWithConnection:(id)a0;
- (id)initWithMessageIDHeader:(id)a0 mailbox:(id)a1;
- (void)encodeWithCoder:(id)a0;

@end
