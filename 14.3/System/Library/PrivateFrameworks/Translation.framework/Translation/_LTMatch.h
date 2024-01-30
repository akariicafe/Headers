@class NSDictionary, NSString;

@interface _LTMatch : NSObject

@property (retain, nonatomic) NSDictionary *node;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (retain, nonatomic) NSString *token;

- (void).cxx_destruct;
- (id)description;
- (id)initWithNode:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

@end
