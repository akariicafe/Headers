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

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)_endSession;
- (unsigned long long)hash;
- (id)init;
- (void).cxx_destruct;
- (BOOL)_validate;
- (void)_startSessionWithDate:(id)a0;
- (long long)_updateFrequency;
- (id)JSONObjectRepresentation;
- (id)_sessionAttributedTextForIndex:(unsigned long long)a0 withStyle:(id)a1;
- (id)_initWithJSONObjectRepresentation:(id)a0;
- (id)_sessionCacheKey;

@end
