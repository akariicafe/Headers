@class NSString, NSArray;

@interface MUPlaceHoursFormatter : NSObject

@property (readonly, nonatomic) NSString *hoursString;
@property (readonly, nonatomic) NSArray *AMPMSymbols;

+ (id)_hoursMonospacedFont;
+ (id)hoursFormatterFromHoursStringComponents:(id)a0 AMPMSymbols:(id)a1;

- (void).cxx_destruct;
- (id)initWithHoursString:(id)a0 AMPMSymbols:(id)a1;
- (id)buildAttributedHourStringWithHourFont:(id)a0 AMPMFont:(id)a1 hourColor:(id)a2 AMPMColor:(id)a3;
- (id)buildDefaultPlacecardHoursString;

@end
