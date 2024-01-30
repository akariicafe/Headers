@interface SFFeatureManager : WBUFeatureManager

@property (class, readonly, nonatomic) SFFeatureManager *sharedFeatureManager;

@property (readonly, nonatomic) BOOL isSimplifiedBookmarkingEnabled;
@property (readonly, nonatomic, getter=isLoweredBarEnabled) BOOL loweredBarEnabled;
@property (readonly, nonatomic, getter=isUnifiedBarEnabled) BOOL unifiedBarEnabled;
@property (readonly, nonatomic) BOOL usesEdgeToEdgeCapsule;
@property (readonly, nonatomic) long long preferredCapsuleLayoutStyle;
@property (readonly, nonatomic) BOOL showRectangularTabsInSeparateBar;

- (id)init;

@end
