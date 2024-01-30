@class NSArray, PKApplyFooterContent;

@interface PKApplyActionContent : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSArray *actionItems;
@property (readonly, nonatomic) PKApplyFooterContent *footerContent;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)analyticsDictionary;

@end
