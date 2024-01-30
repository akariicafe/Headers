@class NSString, NSMutableArray;

@interface SXTextStyleAttributesMap : NSObject

@property (readonly, nonatomic) NSString *string;
@property (readonly, nonatomic) NSMutableArray *attributes;

- (id)attributedString;
- (id)initWithString:(id)a0;
- (id)description;
- (void)addAttributes:(id)a0;
- (void).cxx_destruct;
- (id)attributesMapWithAttributesForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;

@end
