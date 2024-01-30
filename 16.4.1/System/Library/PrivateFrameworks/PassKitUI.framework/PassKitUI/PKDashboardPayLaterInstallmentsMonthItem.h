@class NSString, PKPayLaterInstallmentsMonth;
@protocol PKCalendarMonthAppearance, PKCalendarMonthDataSource;

@interface PKDashboardPayLaterInstallmentsMonthItem : NSObject <PKDashboardItem>

@property (readonly, nonatomic) PKPayLaterInstallmentsMonth *installmentsMonth;
@property (readonly, weak, nonatomic) id<PKCalendarMonthDataSource> dataSource;
@property (readonly, weak, nonatomic) id<PKCalendarMonthAppearance> appearance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifier;

- (void).cxx_destruct;
- (id)initWithDataSource:(id)a0 appearance:(id)a1 installmentsMonth:(id)a2;

@end
