@class NSString, NSArray;

@interface PKApplyFooterContent : NSObject <NSCopying>

@property (copy, nonatomic) NSString *footerText;
@property (copy, nonatomic) NSArray *links;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)termsIdentifiers;

@end
