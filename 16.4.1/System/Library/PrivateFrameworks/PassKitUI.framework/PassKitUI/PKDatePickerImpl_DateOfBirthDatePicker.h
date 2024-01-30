@class NSString, NSDate;

@interface PKDatePickerImpl_DateOfBirthDatePicker : PKDatePickerImpl_DatePicker <PKDatePickerInternalImplementationProtocol>

@property (retain, nonatomic) NSDate *date;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initShowingDay:(BOOL)a0 month:(BOOL)a1 year:(BOOL)a2 useDarkAppearance:(BOOL)a3 locale:(id)a4 calendar:(id)a5;

@end
