@class NSString, NSDate;

@interface SSReminderResultBuilder : SSResultBuilder

@property (retain, nonatomic) NSDate *completionDate;
@property (retain, nonatomic) NSDate *dueDate;
@property (retain, nonatomic) NSDate *modificationDate;
@property (retain, nonatomic) NSString *reminder;

+ (id)bundleId;
+ (BOOL)isCoreSpotlightResult;
+ (id)stringWithCompletionDate:(id)a0 dueDate:(id)a1 modificationDate:(id)a2;
+ (id)stringWithCompletionDate:(id)a0 dueDate:(id)a1 modificationDate:(id)a2 isCompact:(BOOL)a3;

- (id)initWithResult:(id)a0;
- (void).cxx_destruct;
- (id)buildCompactCardSection;
- (id)buildDateToDisplayWithCompactFormatting:(BOOL)a0;
- (id)buildInlineCardSection;

@end
