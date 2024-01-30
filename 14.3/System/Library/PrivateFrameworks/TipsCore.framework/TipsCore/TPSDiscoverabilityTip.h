@class NSDictionary, NSAttributedString;

@interface TPSDiscoverabilityTip : TPSTip

@property (retain, nonatomic) NSAttributedString *attributedString;
@property (copy, nonatomic) NSDictionary *preconditions;

+ (BOOL)supportsSecureCoding;
+ (id)classSet;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;

@end
