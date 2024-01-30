@class NSString;

@interface ATXHomeScreenSessionMetadata : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *widgetUniqueId;
@property (retain, nonatomic) NSString *widgetBundleId;
@property (nonatomic) BOOL isWidgetInTodayView;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithWidgetUniqueId:(id)a0 widgetBundleId:(id)a1 isWidgetInTodayView:(BOOL)a2;
- (BOOL)isEqualToATXHomeScreenSessionMetadata:(id)a0;

@end
