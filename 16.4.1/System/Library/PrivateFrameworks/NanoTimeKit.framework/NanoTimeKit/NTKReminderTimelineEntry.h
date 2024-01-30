@class NSString, UIColor, NSDate;

@interface NTKReminderTimelineEntry : NTKTimelineEntryModel

@property (retain, nonatomic) NSDate *dueDate;
@property (retain, nonatomic) NSString *primaryReminderTitle;
@property (retain, nonatomic) NSString *primaryReminderId;
@property (retain, nonatomic) NSString *secondaryReminderTitle;
@property (nonatomic) BOOL displayAsConflicting;
@property (nonatomic) unsigned long long overlappingReminderCount;
@property (retain, nonatomic) UIColor *primaryReminderParentListColor;

+ (id)_analogReminderImageProvider;
+ (id)_cornerReminderImageProvider;
+ (id)_reminderImageAnalog;
+ (id)_reminderImageCorner;
+ (id)loadingEntryForFamily:(long long)a0;
+ (id)lockedEntryForFamily:(long long)a0;

- (id)description;
- (void).cxx_destruct;
- (id)_createLargeModularTemplate;
- (id)_createLargeUtilityTemplate;
- (id)_createSignatureCornerTemplate;
- (id)templateForComplicationFamily:(long long)a0;

@end
