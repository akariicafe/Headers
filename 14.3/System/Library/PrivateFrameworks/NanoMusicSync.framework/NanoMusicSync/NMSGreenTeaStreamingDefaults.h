@class NSUserDefaults;

@interface NMSGreenTeaStreamingDefaults : NSObject {
    NSUserDefaults *_sharedDefaults;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (BOOL)_boolForKey:(id)a0;
- (void)_setBool:(BOOL)a0 forKey:(id)a1;
- (BOOL)greenTeaMusicIsMirroringStreamingSettings;
- (void)setGreenTeaMusicIsMirroringStreamingSettings:(BOOL)a0;
- (BOOL)greenTeaMusicAllowCellularForStreaming;
- (void)setGreenTeaMusicAllowCellularForStreaming:(BOOL)a0;
- (BOOL)greenTeaMusicAllowCellularForHighQualityStreaming;
- (void)setGreenTeaMusicAllowCellularForHighQualityStreaming:(BOOL)a0;

@end
