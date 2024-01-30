@class NSString;

@interface SSPaymentSheetPriceSectionItem : NSObject <NSCopying>

@property (copy) NSString *label;
@property (copy) NSString *price;

- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)a0;
- (void)_parseDictionary:(id)a0 withCaseControl:(BOOL)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;

@end
