@class NSString, NSNumber, BrightnessSystemClient;

@interface DBSExternalDisplayManager : NSObject

@property (retain, nonatomic) BrightnessSystemClient *brightnessSystemClient;
@property (readonly, nonatomic) BOOL externalDisplayAvailable;
@property (readonly, nonatomic) BOOL externalDisplayBrightnessAvailable;
@property (readonly, nonatomic) BOOL externalDisplayAutoBrightnessAvailable;
@property (retain, nonatomic) NSString *currentHDRMode;
@property (nonatomic) BOOL matchContent;
@property (readonly, nonatomic) NSNumber *externalDisplayBrightness;
@property (nonatomic) BOOL autoBrightnessEnabled;

+ (id)defaultManager;

- (id)supportedHDRModes;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)preferredHDRModes;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)setExternalDisplayBrightness:(id)a0 shouldCommit:(BOOL)a1;
- (id)externalDisplayName;

@end
