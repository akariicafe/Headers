@class NSString, NSLocale;

@interface TISmartPunctuationOptions : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *leftSingleQuote;
@property (copy, nonatomic) NSString *rightSingleQuote;
@property (copy, nonatomic) NSString *apostrophe;
@property (copy, nonatomic) NSString *leftDoubleQuote;
@property (copy, nonatomic) NSString *rightDoubleQuote;
@property (readonly, nonatomic) NSLocale *locale;

+ (id)smartPunctuationOptionsForLocale:(id)a0;

- (id)initWithLocale:(id)a0;
- (void)_generateDataFromLocale;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
