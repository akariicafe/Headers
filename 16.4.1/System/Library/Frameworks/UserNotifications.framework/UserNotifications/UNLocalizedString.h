@class NSString, NSArray;

@interface UNLocalizedString : NSString

@property (readonly, copy, nonatomic) NSString *key;
@property (readonly, copy, nonatomic) NSArray *arguments;
@property (readonly, copy, nonatomic) NSString *value;

+ (BOOL)supportsSecureCoding;
+ (id)localizedStringForKey:(id)a0 arguments:(id)a1 value:(id)a2;

- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (BOOL)_allowsDirectEncoding;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (void)encodeWithCoder:(id)a0;
- (Class)classForKeyedArchiver;
- (id)initWithCoder:(id)a0;
- (Class)classForCoder;
- (unsigned long long)length;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)un_localizedStringKey;
- (id)init;
- (id)un_localizedStringValue;
- (id)_initWithKey:(id)a0 arguments:(id)a1 value:(id)a2;
- (id)description;
- (void).cxx_destruct;
- (id)un_localizedStringArguments;

@end
