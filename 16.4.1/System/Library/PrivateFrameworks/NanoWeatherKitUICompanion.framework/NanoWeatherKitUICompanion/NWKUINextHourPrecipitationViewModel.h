@class NSString, NSArray, WFNextHourPrecipitation, NSDate;

@interface NWKUINextHourPrecipitationViewModel : NSObject {
    NSString *_conditionText;
}

@property (readonly, nonatomic) NSString *conditionTitleText;
@property (readonly, nonatomic) NSString *conditionText;
@property (readonly, nonatomic) NSDate *currentTime;
@property (readonly, nonatomic) NSArray *minuteStrings;
@property (nonatomic) BOOL isRTL;
@property (readonly, nonatomic) WFNextHourPrecipitation *nextHourPrecipitation;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)percentPrecipitationIntensities;
- (id)_arrayOfZerosOfSize:(unsigned long long)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_conditionRangeForDescription:(id)a0;
- (id)_percentPrecipitationIntensitiesForMinutesOut:(unsigned long long)a0 resolution:(unsigned long long)a1;
- (id)attributedConditionsTextWithFont:(id)a0;
- (id)initWithNextHourPrecipitation:(id)a0 currentTime:(id)a1;

@end
