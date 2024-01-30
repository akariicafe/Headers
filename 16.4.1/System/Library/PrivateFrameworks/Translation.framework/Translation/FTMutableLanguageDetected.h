@class NSString, NSArray;

@interface FTMutableLanguageDetected : FTLanguageDetected

@property (copy, nonatomic) NSString *detected_locale;
@property (copy, nonatomic) NSArray *predictions;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
