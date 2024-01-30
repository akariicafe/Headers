@class NSString, NSNumber;

@interface AFTestRequestOptions : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long requestPath;
@property (readonly, copy, nonatomic) NSString *inputOrigin;
@property (readonly, copy, nonatomic) NSNumber *isEyesFree;

+ (id)newWithBuilder:(id /* block */)a0;

- (id)_descriptionWithIndent:(unsigned long long)a0;
- (id)mutatedCopyWithMutator:(id /* block */)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithRequestPath:(long long)a0 inputOrigin:(id)a1 isEyesFree:(id)a2;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
