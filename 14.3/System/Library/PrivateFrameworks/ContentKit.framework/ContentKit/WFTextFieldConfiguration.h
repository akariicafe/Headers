@class NSString;

@interface WFTextFieldConfiguration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *prefix;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *placeholder;
@property (nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;
@property (nonatomic, getter=isMultiline) BOOL multiline;
@property (nonatomic) BOOL allowsNegativeNumbers;
@property (nonatomic) BOOL smartQuotesDisabled;
@property (nonatomic) BOOL smartDashesDisabled;
@property (copy, nonatomic) NSString *keyboardType;
@property (copy, nonatomic) NSString *clearButtonMode;
@property (copy, nonatomic) NSString *autocapitalizationType;
@property (copy, nonatomic) NSString *autocorrectionType;
@property (copy, nonatomic) NSString *returnKeyType;
@property (copy, nonatomic) NSString *textContentType;
@property (copy, nonatomic) NSString *textAlignment;
@property (nonatomic) BOOL focusImmediatelyWhenPresented;
@property (nonatomic) long long initialInsertionIndex;
@property (nonatomic) BOOL showsDateFormattingHint;
@property (nonatomic) unsigned long long dateFormatStyle;
@property (nonatomic) unsigned long long timeFormatStyle;
@property (nonatomic) BOOL dateHintPrefersDateOnly;
@property (nonatomic) BOOL doesRelativeDateFormatting;
@property (copy, nonatomic) NSString *localizedIncompleteHintString;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
