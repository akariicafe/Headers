@class NSDictionary;

@interface SBIconDefaults : SBAbstractSpringBoardDefaultDomain

@property (readonly, nonatomic) long long maxIconListCount;
@property (nonatomic) BOOL didShowIconReorderAlert;
@property (readonly, nonatomic) BOOL shouldDisableLiveIcons;
@property (readonly, nonatomic) BOOL suppressSetCurrentPage;
@property (nonatomic) BOOL suppressAppShortcutTruncation;
@property (readonly, nonatomic) NSDictionary *legacyIconState;
@property (readonly, nonatomic) NSDictionary *legacyIconState2;

- (void)_bindAndRegisterDefaults;
- (void)clearLegacyDefaults;

@end
