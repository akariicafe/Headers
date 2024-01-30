@class HKHRCardioFitnessFooter;

@interface HKHRCardioFitnessWatchSettings : NSObject

@property (nonatomic) BOOL settingVisible;
@property (nonatomic) BOOL settingEnabled;
@property (retain, nonatomic) HKHRCardioFitnessFooter *footer;

+ (id)hiddenSettings;

- (void).cxx_destruct;
- (id)initWithSettingVisible:(BOOL)a0 settingEnabled:(BOOL)a1 footer:(id)a2;

@end
