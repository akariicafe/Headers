@class NSString, NSDecimalNumber;

@interface INCurrencyAmount : NSObject <INCodableAttributeRelationComparing, INCurrencyAmountExport, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSDecimalNumber *amount;
@property (readonly, copy, nonatomic) NSString *currencyCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)_intents_readableTitleWithLocalizer:(id)a0 metadata:(id)a1;
- (id)initWithAmount:(id)a0 currencyCode:(id)a1;
- (BOOL)isEqual:(id)a0;
- (id)descriptionAtIndent:(unsigned long long)a0;
- (BOOL)_intents_compareValue:(id)a0 relation:(unsigned long long)a1;
- (void)encodeWithCoder:(id)a0;
- (id)_dictionaryRepresentation;

@end
