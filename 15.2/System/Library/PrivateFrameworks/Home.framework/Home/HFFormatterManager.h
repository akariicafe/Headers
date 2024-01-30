@class HFTemperatureFormatter;

@interface HFFormatterManager : NSObject

@property (retain, nonatomic) HFTemperatureFormatter *temperatureFormatter;

+ (id)sharedInstance;

- (id)timeFormatter;
- (void).cxx_destruct;
- (id)init;
- (id)relativeDateFormatter;
- (id)percentFormatter;
- (id)luxFormatter;
- (id)booleanFormatter;
- (void)registerTemperatureFormatter:(id)a0;
- (id)timeIntervalFormatter;
- (id)arcDegreeFormatter;
- (id)identityFormatter;
- (id)emptyStringFormatter;

@end
