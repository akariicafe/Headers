@class NSString, NSArray;

@interface UNLocalizedString : NSString

@property (readonly, copy, nonatomic) NSString *key;
@property (readonly, copy, nonatomic) NSArray *arguments;
@property (readonly, copy, nonatomic) NSString *value;

+ (BOOL)supportsSecureCoding;
+ (id)localizedStringForKey:(id)a0 arguments:(id)a1 value:(id)a2;

- (unsigned long long)length;
- (id)init;
- (void).cxx_destruct;
- (id)un_localizedStringKey;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_allowsDirectEncoding;
- (Class)classForKeyedArchiver;
- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)debugDescription;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (Class)classForCoder;
- (id)_initWithKey:(id)a0 arguments:(id)a1 value:(id)a2;
- (id)un_localizedStringArguments;
- (id)un_localizedStringValue;
- (void)encodeWithCoder:(id)a0;

@end
