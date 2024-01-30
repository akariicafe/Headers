@class NSUUID, NSString, NSData, NSUserActivity, SBSSystemNotesSnapshotManifest;

@interface SBSSystemNotesPresentationConfiguration : NSObject <BSDescriptionProviding, NSSecureCoding, NSCopying> {
    NSData *_userActivityData;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSData *userActivityData;
@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, copy, nonatomic) NSString *sceneBundleIdentifier;
@property (readonly, nonatomic) NSUserActivity *userActivity;
@property (readonly, nonatomic) long long preferredPresentationMode;
@property (retain, nonatomic) SBSSystemNotesSnapshotManifest *snapshotManifest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSceneBundleIdentifier:(id)a0;
- (void)setPreferredPresentationMode:(long long)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)succinctDescription;
- (id)initWithSceneBundleIdentifier:(id)a0 userActivity:(id)a1;
- (BOOL)isEqualToSystemNotesPresentationConfiguration:(id)a0;
- (id)initWithSceneBundleIdentifier:(id)a0 userActivity:(id)a1 preferredPresentationMode:(long long)a2;
- (id)initWithSceneBundleIdentifier:(id)a0 userActivity:(id)a1 preferredPresentationMode:(long long)a2 identifier:(id)a3;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)succinctDescriptionBuilder;
- (void)prepareForXPCCall:(id /* block */)a0;

@end
