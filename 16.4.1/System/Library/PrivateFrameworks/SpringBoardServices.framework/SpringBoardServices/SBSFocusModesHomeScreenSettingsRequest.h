@class NSString, NSArray;

@interface SBSFocusModesHomeScreenSettingsRequest : NSObject <BSDescriptionProviding, BSXPCSecureCoding>

@property (readonly, copy, nonatomic) NSString *focusModeIdentifier;
@property (retain, nonatomic) NSArray *listsToAdd;
@property (retain, nonatomic) NSArray *listsToRemove;
@property (retain, nonatomic) NSArray *proactivePages;
@property (nonatomic) double snapshotDelay;
@property (nonatomic) BOOL appendExistingPages;
@property (nonatomic) BOOL excludeWallpaper;
@property (nonatomic) double snapshotScale;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsBSXPCSecureCoding;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)initWithBSXPCCoder:(id)a0;
- (void)encodeWithBSXPCCoder:(id)a0;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)initWithFocusModeIdentifier:(id)a0;

@end
