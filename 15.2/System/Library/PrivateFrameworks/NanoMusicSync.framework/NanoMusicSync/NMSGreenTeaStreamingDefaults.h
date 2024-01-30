@class NSUserDefaults;

@interface NMSGreenTeaStreamingDefaults : NSObject {
    NSUserDefaults *_sharedDefaults;
}

+ (id)sharedInstance;

- (void)_setBool:(BOOL)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (BOOL)_boolForKey:(id)a0;
- (BOOL)greenTeaMusicIsMirroringStreamingSettings;
- (void)setGreenTeaMusicIsMirroringStreamingSettings:(BOOL)a0;
- (BOOL)greenTeaMusicAllowCellularForStreaming;
- (void)setGreenTeaMusicAllowCellularForStreaming:(BOOL)a0;
- (BOOL)greenTeaMusicAllowCellularForHighQualityStreaming;
- (void)setGreenTeaMusicAllowCellularForHighQualityStreaming:(BOOL)a0;

@end
