@class NSAttributedString;

@interface _MKMultiPartStringComponent : NSObject

@property (readonly, copy, nonatomic) NSAttributedString *attributedString;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } originalRange;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;

- (id)description;
- (id)initWithAttributedString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void).cxx_destruct;

@end
