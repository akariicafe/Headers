@class NSString;

@interface NSLocalizableString : NSString {
    NSString *_stringsFileKey;
    NSString *_developmentLanguageString;
}

@property (readonly, copy) NSString *stringsFileKey;
@property (readonly, copy) NSString *developmentLanguageString;

+ (id)localizableStringWithStringsFileKey:(id)a0 developmentLanguageString:(id)a1;
+ (BOOL)supportsSecureCoding;

- (id)awakeAfterUsingCoder:(id)a0;
- (unsigned long long)length;
- (id)initWithStringsFileKey:(id)a0 developmentLanguageString:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void)setDevelopmentLanguageString:(id)a0;
- (void)setStringsFileKey:(id)a0;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;

@end
