@class NSString;

@interface TSWPNumberAttachment : TSWPTextualAttachment

@property (copy, nonatomic) NSString *stringValue;
@property (nonatomic) int numberFormat;

- (void)dealloc;
- (id)copyWithContext:(id)a0;
- (id)stringEquivalent;
- (id)stringEquivalentWithLayoutParent:(id)a0;
- (id)stringWithNumber:(unsigned long long)a0;

@end
