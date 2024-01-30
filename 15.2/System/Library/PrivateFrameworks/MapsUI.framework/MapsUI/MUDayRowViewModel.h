@class NSString, NSArray;

@interface MUDayRowViewModel : NSObject

@property (retain, nonatomic) NSString *labelHeaderString;
@property (retain, nonatomic) NSString *dayString;
@property (retain, nonatomic) NSArray *hourStrings;
@property (retain, nonatomic) NSArray *AMPMStrings;

- (void).cxx_destruct;
- (id)buildDefaultPlacecardHoursString;

@end
