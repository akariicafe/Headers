@class NSString, NSExpression, NSAttributeDescription;

@interface NSExpressionDescription : NSPropertyDescription {
    id _reservedtype1_1;
    id _reservedtype1_2;
    unsigned long long _reservedtype1_3;
    id _reservedtype1_4;
    unsigned long long _reservedtype1_5;
    id _reservedtype1_6;
    void *_reservedtype2_1;
    void *_reservedtype2_2;
    NSAttributeDescription *_underlyingAttribute;
    NSExpression *_expression;
    unsigned long long _expressionResultType;
}

@property (readonly, copy) NSString *attributeValueClassName;
@property (readonly, copy) NSString *valueTransformerName;
@property (retain) NSExpression *expression;
@property unsigned long long expressionResultType;

+ (BOOL)supportsSecureCoding;

- (id)init;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (unsigned long long)_propertyType;
- (id)description;
- (void)_writeIntoData:(id)a0 propertiesDict:(id)a1 uniquedPropertyNames:(id)a2 uniquedStrings:(id)a3 uniquedData:(id)a4 entitiesSlots:(id)a5 fetchRequests:(id)a6;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
