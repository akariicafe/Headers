@class CKTextKitEntityAttribute;

@interface CKTextKitTextCheckingResult : NSTextCheckingResult {
    struct _NSRange { unsigned long long location; unsigned long long length; } _rangeOverride;
    unsigned long long _resultTypeOverride;
}

@property (readonly, nonatomic) CKTextKitEntityAttribute *entityAttribute;

- (struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (unsigned long long)resultType;
- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0 entityAttribute:(id)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;

@end
