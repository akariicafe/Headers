@protocol NCSSettingsManagerDelegate;

@interface NCSSettingsManager : NCSInternalSettingsManager

@property (weak, nonatomic) id<NCSSettingsManagerDelegate> delegate;

+ (id)sharedSettingsManager;

- (void).cxx_destruct;
- (id)init;
- (void)loadSettings;
- (void)dealloc;
- (void)_handleLocaleChange:(id)a0;
- (void)_updateSockPuppetComplications;
- (id)_fetchSockPuppetComplications;

@end
