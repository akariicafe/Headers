@class NSString;

@interface _MFDADeferredDeleteMessageOperation : _MFOfflineCacheOperation {
    NSString *_messageID;
}

+ (BOOL)supportsSecureCoding;
+ (id)log;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)translateToLocalActionWithConnection:(id)a0;

@end
