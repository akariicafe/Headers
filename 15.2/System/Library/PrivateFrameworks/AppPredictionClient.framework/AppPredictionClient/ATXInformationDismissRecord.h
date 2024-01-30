@class NSString, NSDate;

@interface ATXInformationDismissRecord : NSObject

@property (readonly, nonatomic) NSString *widgetBundleId;
@property (readonly, nonatomic) NSString *criterion;
@property (readonly, nonatomic) NSDate *blockWidgetUntilDate;
@property (readonly, nonatomic) NSDate *blockCriterionUntilDate;

- (void).cxx_destruct;
- (id)init;
- (id)initWithWidgetBundleId:(id)a0 criterion:(id)a1 blockWidgetUntilDate:(id)a2 blockCriterionUntilDate:(id)a3;

@end
