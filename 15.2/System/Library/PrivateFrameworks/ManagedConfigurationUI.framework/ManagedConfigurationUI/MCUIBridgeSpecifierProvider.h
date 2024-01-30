@class NSArray, NSSManager;

@interface MCUIBridgeSpecifierProvider : MCUISpecifierProvider

@property (retain, nonatomic) NSSManager *nssManager;
@property (nonatomic) unsigned long long watchFetchStatus;
@property (retain, nonatomic) NSArray *mdmProfiles;
@property (retain, nonatomic) NSArray *installedProfiles;

- (id)specifiers;
- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (void)loadProfileFromSpecifier:(id)a0;
- (void)fetchWatchProfileList;
- (id)_specifiersForWatchProfiles;
- (id)_emptySpecifier;
- (void)_handleWatchFetchError;
- (void)_handleWatchFetchSuccessWithReply:(id)a0;

@end
