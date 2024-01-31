@class NSString, NSDateComponents, NSDate;

@interface CLKCurrentTimeTextProvider : CLKTimeTextProvider {
    unsigned long long _calendarUnits;
    NSDateComponents *_sessionComponents;
    NSString *_sessionCacheKey;
    BOOL _sessionInProgress;
}

@property (copy, nonatomic) NSDate *overrideDate;

+ (BOOL)supportsSecureCoding;
+ (id)textProviderWithTimeZone:(id)a0;

- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)_endSession;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_validate;
- (void)_startSessionWithDate:(id)a0;
- (long long)_updateFrequency;
- (id)JSONObjectRepresentation;
- (id)_initWithJSONObjectRepresentation:(id)a0;
- (id)_sessionAttributedTextForIndex:(unsigned long long)a0 withStyle:(id)a1;
- (id)_sessionCacheKey;

@end
