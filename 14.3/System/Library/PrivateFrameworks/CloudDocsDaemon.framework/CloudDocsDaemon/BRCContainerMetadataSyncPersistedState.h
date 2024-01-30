@class CKServerChangeToken, CKOperationGroup, NSDate;

@interface BRCContainerMetadataSyncPersistedState : BRCPersistedState

@property (retain, nonatomic) CKServerChangeToken *serverChangeToken;
@property (retain) NSDate *lastSyncDate;
@property (nonatomic) BOOL needsContainerMetadataSyncDown;
@property (nonatomic) BOOL needsSharedDBSyncDown;
@property (retain, nonatomic) CKOperationGroup *ckGroup;

+ (BOOL)supportsSecureCoding;
+ (id)loadFromClientStateInSession:(id)a0 options:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
