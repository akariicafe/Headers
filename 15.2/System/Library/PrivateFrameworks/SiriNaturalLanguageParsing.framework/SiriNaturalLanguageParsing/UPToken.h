@class NSString;

@interface UPToken : NSObject <NSCopying>

@property (readonly, copy) NSString *string;
@property (readonly) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (readonly) BOOL isWhitespace;

- (id)initWithString:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqualToToken:(id)a0;
- (id)initWithString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 isWhitespace:(BOOL)a2;

@end
