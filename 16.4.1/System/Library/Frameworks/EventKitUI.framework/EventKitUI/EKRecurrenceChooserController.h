@class UIColor, NSDate;
@protocol EKRecurrenceChooserControllerDelegate;

@interface EKRecurrenceChooserController : NSObject

@property (copy) NSDate *date;
@property (weak) id<EKRecurrenceChooserControllerDelegate> delegate;
@property (copy, nonatomic) UIColor *backgroundColor;
@property (readonly, nonatomic) long long frequency;

+ (int)dayFromNumber:(long long)a0;

- (long long)numberOfRows;
- (void).cxx_destruct;
- (id)initWithDate:(id)a0;
- (id)cellForRow:(long long)a0;
- (BOOL)drawBackgroundForRow:(long long)a0;
- (double)heightForRow:(long long)a0;
- (void)notifyDelegate;
- (void)rowTapped:(long long)a0;
- (id)startDateComponents:(unsigned long long)a0;
- (void)updateFromRecurrenceRule:(id)a0;
- (void)updateRecurrenceRuleBuilder:(id)a0;

@end
