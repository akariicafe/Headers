@class NSString, NSDate;

@interface _DASWidgetView : _DASWidgetInfo

@property (readonly, copy, nonatomic) NSString *viewID;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (nonatomic) BOOL inStack;
@property (nonatomic) long long pageID;
@property (nonatomic) double timeUntilContentExpiration;

+ (id)viewFrom:(id)a0 to:(id)a1 forWidgetID:(id)a2;

- (id)initWithViewID:(id)a0 budgetID:(id)a1 extensionBundleID:(id)a2 from:(id)a3 to:(id)a4;
- (void).cxx_destruct;

@end
