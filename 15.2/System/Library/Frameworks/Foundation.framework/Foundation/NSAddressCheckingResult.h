@class NSDictionary;

@interface NSAddressCheckingResult : NSTextCheckingResult {
    struct _NSRange { unsigned long long location; unsigned long long length; } _range;
    NSDictionary *_components;
    id _underlyingResult;
}

@property (readonly) void *underlyingResult;

+ (BOOL)supportsSecureCoding;

- (id)components;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 components:(id)a1 underlyingResult:(void *)a2;
- (void)encodeWithCoder:(id)a0;
- (unsigned long long)resultType;
- (id)resultByAdjustingRangesWithOffset:(long long)a0;
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 components:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (BOOL)_adjustRangesWithOffset:(long long)a0;

@end
