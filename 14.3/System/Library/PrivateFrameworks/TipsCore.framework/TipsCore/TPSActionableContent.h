@class NSArray;

@interface TPSActionableContent : TPSContent

@property (copy, nonatomic) NSArray *actions;

+ (BOOL)supportsSecureCoding;
+ (id)classSet;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)debugDescription;
- (id)initWithDictionary:(id)a0 metadata:(id)a1;
- (void)encodeWithCoder:(id)a0;

@end
