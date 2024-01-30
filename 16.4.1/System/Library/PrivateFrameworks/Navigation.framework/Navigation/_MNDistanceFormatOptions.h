@class NSUnitLength, NSLocale;

@interface _MNDistanceFormatOptions : NSObject

@property (nonatomic) unsigned long long minimumFractionDigits;
@property (nonatomic) unsigned long long maximumFractionDigits;
@property (nonatomic) BOOL metric;
@property (nonatomic) BOOL yards;
@property (nonatomic) BOOL abbreviateUnits;
@property (nonatomic) BOOL spoken;
@property (nonatomic) long long rounding;
@property (retain, nonatomic) NSUnitLength *unitLength;
@property (retain, nonatomic) NSLocale *locale;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;

@end
