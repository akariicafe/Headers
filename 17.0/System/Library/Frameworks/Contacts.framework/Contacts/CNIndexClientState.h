@class CNChangeHistoryAnchor;

@interface CNIndexClientState : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long indexVersion;
@property (nonatomic) BOOL isFullSyncDone;
@property (retain, nonatomic) CNChangeHistoryAnchor *fullSyncSnapshotAnchor;
@property (nonatomic) long long fullSyncOffset;

+ (id)clientStateWithData:(id)a0 logger:(id)a1;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)data;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
