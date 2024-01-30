@interface SBRequestFolderSnapshotsSwitcherEventResponse : SBSwitcherModifierEventResponse

@property (nonatomic, getter=isSnapshotRequested) BOOL snapshotRequested;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (long long)type;
- (id)initWithSnapshotRequest:(BOOL)a0;

@end
