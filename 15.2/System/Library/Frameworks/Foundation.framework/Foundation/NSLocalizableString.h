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
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (id)initWithStringsFileKey:(id)a0 developmentLanguageString:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (void)setDevelopmentLanguageString:(id)a0;
- (void)setStringsFileKey:(id)a0;
- (Class)classForCoder;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;

@end
