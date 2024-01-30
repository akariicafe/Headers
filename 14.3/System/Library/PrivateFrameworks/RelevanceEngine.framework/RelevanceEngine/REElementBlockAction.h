@interface REElementBlockAction : REElementAction

@property (readonly, nonatomic) id /* block */ action;

- (id)initWithAction:(id /* block */)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)_performWithContext:(id)a0;

@end
