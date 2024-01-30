@class NSString, LNValueType;

@interface LNResolvableInputMetadata : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long kind;
@property (readonly, copy, nonatomic) NSString *queryType;
@property (readonly, copy, nonatomic) LNValueType *valueType;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithQueryType:(id)a0;
- (id)initWithValueType:(id)a0;

@end
