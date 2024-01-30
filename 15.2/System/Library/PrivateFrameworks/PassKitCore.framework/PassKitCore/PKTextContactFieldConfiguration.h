@class NSString, NSRegularExpression, NSCharacterSet;

@interface PKTextContactFieldConfiguration : PKContactFieldConfiguration <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long minLength;
@property (readonly, nonatomic) long long maxLength;
@property (readonly, nonatomic, getter=isNumeric) BOOL numeric;
@property (readonly, copy, nonatomic) NSString *displayFormat;
@property (readonly, copy, nonatomic) NSString *displayFormatPlaceholder;
@property (readonly, nonatomic) BOOL keepPaddingCharactersForSubmission;
@property (readonly, nonatomic) NSCharacterSet *characterSet;
@property (readonly, nonatomic) BOOL isValidCharacterSet;
@property (readonly, nonatomic) NSRegularExpression *validRegex;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;

@end
