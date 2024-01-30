@class NSString, NSAttributedString, HKUIMetricColors;

@interface HKDisplayTypeContextItem : NSObject

@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL infoHidden;
@property (nonatomic) BOOL useTightSpacingBetweenValueAndUnit;
@property (nonatomic) BOOL userInteractive;
@property (copy, nonatomic) NSString *unit;
@property (copy, nonatomic) NSString *value;
@property (copy, nonatomic) NSString *valueContext;
@property (copy, nonatomic) NSAttributedString *attributedValue;
@property (copy, nonatomic) NSString *dateString;
@property (retain, nonatomic) HKUIMetricColors *metricColors;
@property (retain, nonatomic) HKUIMetricColors *selectedMetricColors;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (id)debugDescription;
- (BOOL)isEqualToContextItem:(id)a0;

@end
