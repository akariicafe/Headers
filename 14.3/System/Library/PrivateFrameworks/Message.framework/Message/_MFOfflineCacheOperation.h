@interface _MFOfflineCacheOperation : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (BOOL)translateToLocalActionWithConnection:(id)a0;
- (BOOL)databaseID:(id *)a0 andMailbox:(id *)a1 forMessageWithRemoteID:(id)a2 connection:(id)a3;
- (void)encodeWithCoder:(id)a0;

@end
