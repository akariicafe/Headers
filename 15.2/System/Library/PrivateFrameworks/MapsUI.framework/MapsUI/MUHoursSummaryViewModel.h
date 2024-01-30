@class NSString, UIColor, NSArray;

@interface MUHoursSummaryViewModel : NSObject

@property (retain, nonatomic) NSString *titleText;
@property (retain, nonatomic) NSString *hoursText;
@property (retain, nonatomic) NSString *openStateText;
@property (retain, nonatomic) UIColor *openStateColor;
@property (retain, nonatomic) NSArray *AMPMSymbols;
@property (nonatomic) BOOL hideChevron;
@property (nonatomic, getter=isServiceHours) BOOL serviceHours;

- (void).cxx_destruct;
- (id)init;
- (id)buildDefaultPlacecardHoursString;

@end
