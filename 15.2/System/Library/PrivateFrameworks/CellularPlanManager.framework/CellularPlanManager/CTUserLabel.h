@class NSString;

@interface CTUserLabel : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *key;
@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) NSString *labelId;

- (id)initWithLabel:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (long long)indexInPredefinedLabels:(id)a0;
- (id)initWithKey:(id)a0 label:(id)a1 labelId:(id)a2;
- (id)_labelKeyDescription;

@end
