@class NSString, NSDate;

@interface ATXWidgetEngagementRecord : NSObject

@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) NSString *widgetBundleId;
@property (readonly, nonatomic) NSString *containerBundleIdentifier;
@property (readonly, nonatomic) NSString *widgetKind;
@property (readonly, nonatomic) long long widgetFamily;

- (void).cxx_destruct;
- (id)initWithDate:(id)a0 type:(long long)a1;
- (id)initWithDate:(id)a0 type:(long long)a1 widgetBundleId:(id)a2 containerBundleIdentifier:(id)a3 widgetKind:(id)a4 layoutSize:(unsigned long long)a5;

@end
