@class CHSWidgetMetrics, CHSWidget;

@interface CHSWidgetKey : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) CHSWidget *widget;
@property (readonly, nonatomic) CHSWidgetMetrics *metrics;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithWidget:(id)a0 metrics:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
