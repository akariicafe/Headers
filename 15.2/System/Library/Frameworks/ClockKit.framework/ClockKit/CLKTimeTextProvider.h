@class NSTimeZone, NSDateFormatter, NSDate, NSMutableArray;

@interface CLKTimeTextProvider : CLKTextProvider {
    NSDateFormatter *_dateFormatter;
    NSMutableArray *_sizingFallbackBlocks;
}

@property (nonatomic) BOOL disallowBothMinutesAndDesignator;
@property (nonatomic) BOOL prefersDesignatorToMinutes;
@property (retain, nonatomic) NSDate *date;
@property (retain, nonatomic) NSTimeZone *timeZone;

+ (BOOL)supportsSecureCoding;
+ (id)textProviderWithDate:(id)a0;
+ (id)textProviderWithDate:(id)a0 timeZone:(id)a1;

- (id)initWithDate:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)_validate;
- (id)description;
- (id)initWithDate:(id)a0 timeZone:(id)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)JSONObjectRepresentation;
- (id)_sessionAttributedTextForIndex:(unsigned long long)a0 withStyle:(id)a1;
- (id)_timeAttributedTextWithStyle:(id)a0 dropMinutes:(BOOL)a1 dropDesignator:(BOOL)a2;
- (id)_initWithJSONObjectRepresentation:(id)a0;

@end
