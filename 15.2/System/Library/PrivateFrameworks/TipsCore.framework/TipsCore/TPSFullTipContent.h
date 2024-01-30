@class NSArray;

@interface TPSFullTipContent : TPSActionableContent

@property (copy, nonatomic) NSArray *footnoteContent;

+ (BOOL)supportsSecureCoding;
+ (id)na_identity;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)initWithDictionary:(id)a0 metadata:(id)a1;

@end
