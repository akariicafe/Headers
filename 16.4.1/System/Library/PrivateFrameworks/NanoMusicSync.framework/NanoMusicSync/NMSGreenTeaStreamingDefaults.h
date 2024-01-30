@class NSUserDefaults;

@interface NMSGreenTeaStreamingDefaults : NSObject {
    NSUserDefaults *_sharedDefaults;
}

+ (id)sharedInstance;

- (void)_setBool:(BOOL)a0 forKey:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (BOOL)_boolForKey:(id)a0;
- (BOOL)greenTeaMusicAllowCellularForHighQualityStreaming;
- (BOOL)greenTeaMusicAllowCellularForStreaming;
- (BOOL)greenTeaMusicAllowsDownloadsOverCellular;
- (BOOL)greenTeaMusicIsMirroringStreamingSettings;
- (void)setGreenTeaMusicAllowCellularForHighQualityStreaming:(BOOL)a0;
- (void)setGreenTeaMusicAllowCellularForStreaming:(BOOL)a0;
- (void)setGreenTeaMusicAllowsDownloadsOverCellular:(BOOL)a0;
- (void)setGreenTeaMusicIsMirroringStreamingSettings:(BOOL)a0;

@end
