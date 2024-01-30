@class NSString, NSAttributedString;

@interface _HMDocument : NSObject <NSCopying>

@property (readonly, copy) NSString *stringValue;
@property (readonly, copy) NSAttributedString *attributedString;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithString:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithData:(id)a0 error:(id *)a1;
- (id)initWithURL:(id)a0 error:(id *)a1;

@end
