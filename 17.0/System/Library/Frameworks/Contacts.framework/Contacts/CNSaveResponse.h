@class NSMutableDictionary;

@interface CNSaveResponse : NSObject <NSSecureCoding> {
    NSMutableDictionary *_contactSnapshotsByIndexPath;
    NSMutableDictionary *_groupSnapshotsByIndexPath;
    NSMutableDictionary *_containerSnapshotsByIndexPath;
    BOOL _didAffectMeCard;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) BOOL didAffectMeCard;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)applySnapshotsToSaveRequest:(id)a0;

@end
