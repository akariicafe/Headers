@class NSString, NSDecimalNumber;

@interface INRideFareLineItem : NSObject <INRideFareLineItemExport, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSDecimalNumber *price;
@property (readonly, nonatomic) NSString *currencyCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)descriptionAtIndent:(unsigned long long)a0;
- (id)initWithTitle:(id)a0 price:(id)a1 currencyCode:(id)a2;
- (void)encodeWithCoder:(id)a0;
- (id)_dictionaryRepresentation;

@end
