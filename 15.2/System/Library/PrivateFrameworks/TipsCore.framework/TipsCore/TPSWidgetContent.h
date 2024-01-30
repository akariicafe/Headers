@class NSDictionary;

@interface TPSWidgetContent : TPSContent

@property (copy, nonatomic) NSDictionary *attributes;
@property (nonatomic) long long priority;

+ (BOOL)supportsSecureCoding;

- (long long)compare:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)titleContent;
- (id)debugDescription;
- (id)initWithDictionary:(id)a0 metadata:(id)a1;

@end
