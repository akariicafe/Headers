@class WFUserSettings;

@interface WebBookmarkWebFilterSettings : NSObject {
    WFUserSettings *_userSettings;
}

@property (readonly, nonatomic) WFUserSettings *userSettings;
@property (readonly, nonatomic, getter=isWebFilterEnabled) BOOL webFilterEnabled;
@property (readonly, nonatomic, getter=isWebFilterWhiteListOnlyModeEnabled) BOOL webFilterWhiteListOnlyModeEnabled;

+ (id)sharedWebFilterSettings;

- (void)reloadSettings;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;

@end
