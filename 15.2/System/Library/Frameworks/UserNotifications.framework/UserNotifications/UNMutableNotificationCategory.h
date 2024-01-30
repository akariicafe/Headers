@class NSArray, NSString, UNNotificationAction;

@interface UNMutableNotificationCategory : UNNotificationCategory

@property (nonatomic) unsigned long long options;
@property (copy, nonatomic) NSArray *actions;
@property (copy, nonatomic) NSArray *minimalActions;
@property (copy, nonatomic) NSArray *intentIdentifiers;
@property (copy, nonatomic) NSString *hiddenPreviewsBodyPlaceholder;
@property (copy, nonatomic) NSString *categorySummaryFormat;
@property (copy, nonatomic) NSString *actionsMenuTitle;
@property (copy, nonatomic) UNNotificationAction *alternateAction;
@property (nonatomic) unsigned long long backgroundStyle;
@property (nonatomic) unsigned long long listPriority;

- (void)setBackgroundStyle:(unsigned long long)a0;
- (void)setHiddenPreviewsBodyPlaceholder:(id)a0;
- (void)setIntentIdentifiers:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (void)setActions:(id)a0;
- (void)setMinimalActions:(id)a0;
- (void)setAlternateAction:(id)a0;
- (void)setActionsMenuTitle:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)setListPriority:(unsigned long long)a0;
- (void)setCategorySummaryFormat:(id)a0;
- (void)setOptions:(unsigned long long)a0;

@end
