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
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)_validate;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)_endSession;
- (void)_startSessionWithDate:(id)a0;
- (long long)_updateFrequency;
- (void)encodeWithCoder:(id)a0;
- (id)_sessionAttributedTextForIndex:(unsigned long long)a0 withStyle:(id)a1;
- (id)JSONObjectRepresentation;
- (id)_initWithJSONObjectRepresentation:(id)a0;
- (id)_sessionCacheKey;

@end
