@class NSString, NSArray;

@interface MUPlaceHoursFormatter : NSObject {
    BOOL _formatAMPM;
}

@property (readonly, nonatomic) NSString *hoursString;
@property (readonly, nonatomic) NSArray *AMPMSymbols;

+ (id)_AMPMFont;
+ (id)_hoursMonospacedFont;
+ (id)hoursFormatterFromHoursStringComponents:(id)a0 AMPMSymbols:(id)a1;

- (void).cxx_destruct;
- (id)buildAttributedHourStringWithHourFont:(id)a0 AMPMFont:(id)a1 hourColor:(id)a2;
- (id)buildDefaultPlacecardHoursString;
- (id)initWithHoursString:(id)a0 AMPMSymbols:(id)a1;

@end
