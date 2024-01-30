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

- (void).cxx_destruct;
- (id)init;
- (void)resetToDefault;
- (id)_forceMiddayDateForDate:(id)a0;

@end
