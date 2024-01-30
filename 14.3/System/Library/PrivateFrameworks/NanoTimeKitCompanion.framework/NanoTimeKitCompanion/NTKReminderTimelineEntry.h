@class NSString, UIColor, NSDate;

@interface NTKReminderTimelineEntry : NTKTimelineEntryModel

@property (retain, nonatomic) NSDate *dueDate;
@property (retain, nonatomic) NSString *primaryReminderTitle;
@property (retain, nonatomic) NSString *primaryReminderId;
@property (retain, nonatomic) NSString *secondaryReminderTitle;
@property (nonatomic) BOOL displayAsConflicting;
@property (nonatomic) unsigned long long overlappingReminderCount;
@property (retain, nonatomic) UIColor *primaryReminderParentListColor;

+ (id)_reminderImageCorner;
+ (id)_cornerReminderImageProvider;
+ (id)_reminderImageAnalog;
+ (id)_analogReminderImageProvider;
+ (id)lockedEntryForFamily:(long long)a0;
+ (id)loadingEntryForFamily:(long long)a0;

- (void).cxx_destruct;
- (id)description;
- (id)templateForComplicationFamily:(long long)a0;
- (id)_createLargeUtilityTemplate;
- (id)_createLargeModularTemplate;
- (id)_createSignatureCornerTemplate;

@end
