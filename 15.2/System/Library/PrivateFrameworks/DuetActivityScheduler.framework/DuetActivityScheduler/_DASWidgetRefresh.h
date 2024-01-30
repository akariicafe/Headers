@class NSString, NSDate;

@interface _DASWidgetRefresh : _DASWidgetInfo

@property (readonly, nonatomic) NSDate *refreshDate;
@property (nonatomic) BOOL isDASInitiated;
@property (copy, nonatomic) NSString *refreshReason;

+ (id)refreshAt:(id)a0 forWidgetID:(id)a1;

- (void).cxx_destruct;
- (id)initWithBudgetID:(id)a0 extensionBundleID:(id)a1 refreshDate:(id)a2;

@end
