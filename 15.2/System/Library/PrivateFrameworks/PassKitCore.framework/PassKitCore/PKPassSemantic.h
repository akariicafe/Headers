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

+ (BOOL)isSupportedDictionaryValueType:(id)a0;
+ (BOOL)isSupportedDictionaryKeyType:(id)a0;
+ (id)_supportedDictionaryValueTypes;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;

@end
