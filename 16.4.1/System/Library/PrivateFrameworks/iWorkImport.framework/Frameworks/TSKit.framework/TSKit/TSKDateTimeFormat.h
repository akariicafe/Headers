@class NSString;

@interface TSKDateTimeFormat : TSKFormat <NSCopying>

@property (readonly, nonatomic) NSString *formatString;

+ (id)defaultDateOnlyShortFormatForLocale:(id)a0;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithLocale:(id)a0;
- (void).cxx_destruct;
- (id)initWithFormatType:(unsigned int)a0;
- (id)initWithFormatString:(id)a0;
- (id)asDateTimeFormat;
- (id)stringFromDate:(id)a0 locale:(id)a1;

@end
