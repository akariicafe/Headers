@class NSString, NSDate;

@interface _DASWidgetRefresh : _DASWidgetInfo

@property (retain, nonatomic) NSDate *refreshDate;
@property (nonatomic) BOOL isDASInitiated;
@property (retain, nonatomic) NSString *refreshReason;

+ (id)refreshAt:(id)a0 forWidgetID:(id)a1;

- (void).cxx_destruct;

@end
