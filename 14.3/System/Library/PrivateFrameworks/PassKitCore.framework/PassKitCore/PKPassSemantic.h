@class PKLocation, NSString, NSArray, NSPersonNameComponents, NSDate, NSNumber, PKCurrencyAmount;

@interface PKPassSemantic : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *semanticKey;
@property (copy, nonatomic) NSString *fieldKey;
@property (copy, nonatomic) NSString *stringValue;
@property (retain, nonatomic) NSDate *dateValue;
@property (retain, nonatomic) NSNumber *numberValue;
@property (retain, nonatomic) PKLocation *locationValue;
@property (retain, nonatomic) PKCurrencyAmount *currencyAmountValue;
@property (retain, nonatomic) NSPersonNameComponents *personNameComponentsValue;
@property (retain, nonatomic) NSArray *stringsValue;
@property (retain, nonatomic) NSArray *dictionariesValue;
@property (readonly, nonatomic) BOOL hasValue;

+ (id)_supportedDictionaryValueTypes;
+ (BOOL)isSupportedDictionaryValueType:(id)a0;
+ (BOOL)isSupportedDictionaryKeyType:(id)a0;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
