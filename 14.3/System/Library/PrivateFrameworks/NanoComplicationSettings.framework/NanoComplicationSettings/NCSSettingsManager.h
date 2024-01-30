@protocol NCSSettingsManagerDelegate;

@interface NCSSettingsManager : NCSInternalSettingsManager

@property (weak, nonatomic) id<NCSSettingsManagerDelegate> delegate;

+ (id)sharedSettingsManager;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)loadSettings;
- (void)_handleLocaleChange:(id)a0;
- (void)_updateSockPuppetComplications;
- (id)_fetchSockPuppetComplications;

@end
