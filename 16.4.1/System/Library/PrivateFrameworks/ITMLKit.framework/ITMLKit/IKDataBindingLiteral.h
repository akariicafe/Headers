@class NSString;

@interface IKDataBindingLiteral : IKDataBindingValue

@property (readonly, nonatomic) NSString *literal;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithLiteral:(id)a0;

@end
