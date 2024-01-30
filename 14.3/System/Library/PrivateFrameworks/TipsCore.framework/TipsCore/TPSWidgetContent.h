@class NSDictionary;

@interface TPSWidgetContent : TPSContent

@property (copy, nonatomic) NSDictionary *attributes;
@property (nonatomic) long long priority;

+ (BOOL)supportsSecureCoding;
+ (id)classSet;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)compare:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)debugDescription;
- (id)initWithDictionary:(id)a0 metadata:(id)a1;
- (id)titleContent;
- (void)encodeWithCoder:(id)a0;

@end
