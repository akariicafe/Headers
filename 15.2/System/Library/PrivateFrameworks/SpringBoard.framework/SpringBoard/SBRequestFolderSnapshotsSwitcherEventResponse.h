@interface SBRequestFolderSnapshotsSwitcherEventResponse : SBSwitcherModifierEventResponse

@property (nonatomic, getter=isSnapshotRequested) BOOL snapshotRequested;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)initWithSnapshotRequest:(BOOL)a0;
- (long long)type;

@end
