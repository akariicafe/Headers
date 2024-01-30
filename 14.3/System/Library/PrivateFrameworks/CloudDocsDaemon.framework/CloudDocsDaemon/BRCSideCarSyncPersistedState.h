@class CKServerChangeToken, CKOperationGroup, NSDate;

@interface BRCSideCarSyncPersistedState : BRCPersistedState

@property (readonly) NSDate *lastSyncDownDate;
@property (readonly, nonatomic) CKServerChangeToken *changeToken;
@property (readonly, nonatomic) unsigned long long requestID;
@property (nonatomic) BOOL needsSync;
@property (retain, nonatomic) CKOperationGroup *ckGroup;

+ (BOOL)supportsSecureCoding;
+ (id)loadFromClientStateInSession:(id)a0 options:(id)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (void)updateWithServerChangeToken:(id)a0 requestID:(unsigned long long)a1;
- (unsigned long long)allocateNextRequestID;
- (void)sideCarZoneWasReset;
- (id)initWithZoneHealthState:(id)a0;

@end
