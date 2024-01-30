@class NSString, NSAttributedString;

@interface _HMDocument : NSObject <NSCopying>

@property (readonly, copy) NSString *stringValue;
@property (readonly, copy) NSAttributedString *attributedString;

- (id)initWithString:(id)a0;
- (id)initWithData:(id)a0 error:(id *)a1;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithURL:(id)a0 error:(id *)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
