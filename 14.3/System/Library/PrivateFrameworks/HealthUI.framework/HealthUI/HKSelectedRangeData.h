@class NSNumber, NSAttributedString, UIColor;

@interface HKSelectedRangeData : NSObject

@property (nonatomic) long long statisticsType;
@property (nonatomic) long long dataType;
@property (retain, nonatomic) NSAttributedString *attributedString;
@property (retain, nonatomic) NSNumber *valueAsNumber;
@property (retain, nonatomic) UIColor *prefixColor;

- (void).cxx_destruct;
- (id)initWithStatisticsType:(long long)a0;

@end
