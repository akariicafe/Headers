@class NSString;

@interface IKDataBindingLiteral : IKDataBindingValue

@property (readonly, nonatomic) NSString *literal;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithLiteral:(id)a0;

@end
