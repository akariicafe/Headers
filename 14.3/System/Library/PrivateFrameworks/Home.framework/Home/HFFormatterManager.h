@class HFTemperatureFormatter;

@interface HFFormatterManager : NSObject

@property (retain, nonatomic) HFTemperatureFormatter *temperatureFormatter;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)relativeDateFormatter;
- (id)booleanFormatter;
- (id)percentFormatter;
- (id)luxFormatter;
- (void)registerTemperatureFormatter:(id)a0;
- (id)timeIntervalFormatter;
- (id)arcDegreeFormatter;
- (id)identityFormatter;
- (id)emptyStringFormatter;

@end
