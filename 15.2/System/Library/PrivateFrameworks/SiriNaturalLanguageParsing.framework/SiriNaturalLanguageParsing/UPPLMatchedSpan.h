@class NSString;

@interface UPPLMatchedSpan : NSObject

@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } tokenIndicesIndex;
@property (readonly, nonatomic) NSString *label;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithLabel:(id)a0 tokenIndicesIndex:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

@end
