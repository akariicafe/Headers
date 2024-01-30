@class NSString, FIUIHealthSettingsDatePicker;

@interface FIUIHealthSettingsBirthDatePickerController : NSObject <FIUIHealthSettingsForceUpdatable>

@property (retain, nonatomic) FIUIHealthSettingsDatePicker *datePickerView;
@property (copy, nonatomic) id /* block */ dateOfBirthUpdateHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
