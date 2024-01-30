@class NPNameParser, NSLocale;

@interface _NSPersonNameComponentsFormatterData : NSObject <NSCopying, NSSecureCoding> {
    NPNameParser *_nameParser;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property long long style;
@property BOOL phonetic;
@property BOOL forceFamilyNameFirst;
@property BOOL forceGivenNameFirst;
@property BOOL ignoresFallbacks;
@property (copy) NSLocale *locale;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;

@end
