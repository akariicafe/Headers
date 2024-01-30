@class NSString, NSDate;

@interface CPLChangeSessionUpdate : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *libraryVersion;
@property (readonly, nonatomic) NSDate *queuedDate;
@property (readonly, nonatomic) NSString *statusDescription;

- (id)initWithStore:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)applyToStore:(id)a0 error:(id *)a1;
- (BOOL)discardFromStore:(id)a0 error:(id *)a1;
- (id)storageForStatusInStore:(id)a0;
- (id)pendingRecordChangeForClientCacheWithLocalScopedIdentifier:(id)a0;

@end
