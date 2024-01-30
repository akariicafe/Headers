@class NSString;

@interface SSPaymentSheetPriceSectionItem : NSObject <NSCopying>

@property (copy) NSString *label;
@property (copy) NSString *price;

- (id)initWithXPCEncoding:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyXPCEncoding;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (void)_parseDictionary:(id)a0 withCaseControl:(BOOL)a1;

@end
