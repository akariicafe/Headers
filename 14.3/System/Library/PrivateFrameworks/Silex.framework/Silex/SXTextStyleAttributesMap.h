@class NSString, NSMutableArray;

@interface SXTextStyleAttributesMap : NSObject

@property (readonly, nonatomic) NSString *string;
@property (readonly, nonatomic) NSMutableArray *attributes;

- (void).cxx_destruct;
- (id)attributedString;
- (id)initWithString:(id)a0;
- (void)addAttributes:(id)a0;
- (id)description;
- (id)attributesMapWithAttributesForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;

@end
