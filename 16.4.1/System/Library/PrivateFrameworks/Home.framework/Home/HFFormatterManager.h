@class HFTemperatureFormatter;

@interface HFFormatterManager : NSObject

@property (retain, nonatomic) HFTemperatureFormatter *temperatureFormatter;

+ (id)sharedInstance;

- (id)timeFormatter;
- (id)init;
- (void).cxx_destruct;
- (id)relativeDateFormatter;
- (id)arcDegreeFormatter;
- (id)booleanFormatter;
- (id)emptyStringFormatter;
- (id)identityFormatter;
- (id)luxFormatter;
- (id)percentFormatter;
- (void)registerTemperatureFormatter:(id)a0;
- (id)timeIntervalFormatter;

@end
