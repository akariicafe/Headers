@class NSArray, _INPBCondition, NSString;

@interface _INPBPaymentMethodList : PBCodable <_INPBPaymentMethodList, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _INPBCondition *condition;
@property (readonly, nonatomic) BOOL hasCondition;
@property (copy, nonatomic) NSArray *paymentMethods;
@property (readonly, nonatomic) unsigned long long paymentMethodsCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)paymentMethodsType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearPaymentMethods;
- (void)addPaymentMethods:(id)a0;
- (id)paymentMethodsAtIndex:(unsigned long long)a0;
- (void)encodeWithCoder:(id)a0;

@end
