@class WFUserSettings;

@interface WBWebFilterSettings : NSObject {
    WFUserSettings *_userSettings;
}

@property (class, readonly, nonatomic) WBWebFilterSettings *sharedWebFilterSettings;

@property (readonly, nonatomic) WFUserSettings *userSettings;
@property (readonly, nonatomic, getter=isWebFilterEnabled) BOOL webFilterEnabled;
@property (readonly, nonatomic) BOOL usesAllowedSitesOnly;

- (void)dealloc;
- (id)init;
- (void)reloadSettings;
- (void).cxx_destruct;

@end
