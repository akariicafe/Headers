@class CRCarPlayAppDeclaration, NSArray, NSString;

@interface DBApplicationInfo : FBSApplicationInfo {
    NSString *_carDisplayName;
}

@property (readonly, nonatomic) CRCarPlayAppDeclaration *carPlayDeclaration;
@property (readonly, nonatomic, getter=isLinkedOnOrAfterYukon) BOOL linkedOnOrAfterYukon;
@property (readonly, nonatomic) BOOL presentsUnderStatusBar;
@property (readonly, nonatomic) BOOL presentsFullScreen;
@property (readonly, nonatomic) BOOL supportsDashboardNavigation;
@property (readonly, nonatomic) BOOL supportsInstrumentClusterNavigation;
@property (readonly, nonatomic) BOOL requiresBackgroundURLDelivery;
@property (readonly, nonatomic, getter=isHidden) BOOL hidden;
@property (readonly, nonatomic, getter=isCarInternal) BOOL carInternal;
@property (readonly, nonatomic, getter=isCarPrototype) BOOL carPrototype;
@property (readonly, nonatomic, getter=isInternal) BOOL internal;
@property (readonly, nonatomic, getter=isFirstParty) BOOL firstParty;
@property (readonly, nonatomic, getter=isPlaceholder) BOOL placeholder;
@property (readonly, nonatomic, getter=isInstalled) BOOL installed;
@property (readonly, nonatomic, getter=isValid) BOOL valid;
@property (readonly, nonatomic, getter=isCertificationApp) BOOL certificationApp;
@property (readonly, nonatomic) NSArray *requiresFeatureFlags;

- (id)displayName;
- (BOOL)isEqual:(id)a0;
- (void)_loadFromProxy:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;

@end
