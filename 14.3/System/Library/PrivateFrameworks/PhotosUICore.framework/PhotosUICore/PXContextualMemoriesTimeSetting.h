@class NSString, NSDateFormatter, NSDate;

@interface PXContextualMemoriesTimeSetting : NSObject <PXContextualMemoriesSetting>

@property (retain, nonatomic) NSDateFormatter *dateFormatter;
@property (retain, nonatomic) NSDate *date;
@property (readonly, nonatomic) NSString *headerTitle;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *subtitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)resetToDefault;
- (id)_forceMiddayDateForDate:(id)a0;

@end
