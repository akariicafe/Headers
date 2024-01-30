@class UIColor, NSString, NSNumber, NSAttributedString;

@interface HKSelectedRangeData : NSObject

@property (nonatomic) long long statisticsType;
@property (nonatomic) long long dataType;
@property (retain, nonatomic) NSAttributedString *attributedString;
@property (copy, nonatomic) NSNumber *valueAsNumber;
@property (copy, nonatomic) UIColor *prefixColor;
@property (copy, nonatomic) NSString *titleOverride;

- (void).cxx_destruct;
- (id)initWithStatisticsType:(long long)a0;

@end
