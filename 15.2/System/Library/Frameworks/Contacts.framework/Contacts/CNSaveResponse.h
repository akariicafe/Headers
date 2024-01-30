@class NSMutableDictionary;

@interface CNSaveResponse : NSObject <NSSecureCoding> {
    NSMutableDictionary *_contactSnapshotsByIndexPath;
    NSMutableDictionary *_groupSnapshotsByIndexPath;
    NSMutableDictionary *_containerSnapshotsByIndexPath;
    BOOL _didAffectMeCard;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) BOOL didAffectMeCard;

- (void)applySnapshotsToSaveRequest:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
