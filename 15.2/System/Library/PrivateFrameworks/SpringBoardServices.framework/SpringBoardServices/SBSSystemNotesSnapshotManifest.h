@class NSArray;

@interface SBSSystemNotesSnapshotManifest : NSObject <NSSecureCoding> {
    NSArray *_snapshots;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)succinctDescription;
- (id)description;
- (id)snapshotForPresentationMode:(long long)a0;
- (void).cxx_destruct;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)initWithSnapshots:(id)a0;

@end
