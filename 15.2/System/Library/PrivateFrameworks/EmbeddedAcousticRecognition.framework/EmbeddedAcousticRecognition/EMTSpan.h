@class NSString;

@interface EMTSpan : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (readonly, nonatomic) BOOL doNotTranslate;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIdentifier:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 doNotTranslate:(BOOL)a2;

@end
