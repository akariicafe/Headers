@class SBDisplayItem, SBAppLayout, UIImage, XBApplicationSnapshot;

@interface SBAppSwitcherSnapshotCacheEntry : NSObject {
    BOOL _fromFullSizeSnapshotRequest;
    BOOL _needsUpdate;
    SBAppLayout *_appLayout;
    SBDisplayItem *_displayItem;
    XBApplicationSnapshot *_snapshot;
    UIImage *_snapshotImage;
}

- (void).cxx_destruct;
- (id)description;

@end
