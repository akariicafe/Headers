@class NSString, SBSExternalDisplayService, BrightnessSystemClient, NSNumber;

@interface DBSExternalDisplayManager : NSObject <SBSExternalDisplayServiceObserver>

@property (retain, nonatomic) BrightnessSystemClient *brightnessSystemClient;
@property (retain, nonatomic) SBSExternalDisplayService *displayService;
@property (readonly, nonatomic) BOOL externalDisplayAvailable;
@property (readonly, nonatomic) BOOL externalDisplayBrightnessAvailable;
@property (readonly, nonatomic) BOOL externalDisplayAutoBrightnessAvailable;
@property (retain, nonatomic) NSString *currentHDRMode;
@property (nonatomic) BOOL matchContent;
@property (readonly, nonatomic) NSNumber *externalDisplayBrightness;
@property (nonatomic) BOOL autoBrightnessEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultManager;

- (id)supportedHDRModes;
- (void)externalDisplayDidConnect:(id)a0;
- (void)dealloc;
- (id)preferredHDRModes;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)init;
- (void)externalDisplayWillDisconnect:(id)a0;
- (void).cxx_destruct;
- (id)mainDisplayName;
- (struct CGSize { double x0; double x1; })mainDisplaySize;
- (BOOL)deviceSupportsChamoisExternalDisplay;
- (id)externalDisplayName;
- (struct CGSize { double x0; double x1; })externalDisplaySize;
- (id)mainDisplayImageWithWidth:(double)a0;
- (void)setExternalDisplayBrightness:(id)a0 shouldCommit:(BOOL)a1;

@end
