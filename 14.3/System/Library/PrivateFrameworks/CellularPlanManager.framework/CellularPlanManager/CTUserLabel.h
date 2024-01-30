@class NSString;

@interface CTUserLabel : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *key;
@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) NSString *labelId;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithLabel:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (long long)indexInPredefinedLabels:(id)a0;
- (id)initWithKey:(id)a0 label:(id)a1 labelId:(id)a2;
- (id)_labelKeyDescription;

@end
