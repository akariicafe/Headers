@interface REElementBlockAction : REElementAction

@property (readonly, nonatomic) id /* block */ action;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAction:(id /* block */)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (void)_performWithContext:(id)a0;

@end
