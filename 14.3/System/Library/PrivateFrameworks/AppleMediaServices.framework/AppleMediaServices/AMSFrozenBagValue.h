@protocol AMSBagDataSourceProtocol;

@interface AMSFrozenBagValue : AMSBagValue

@property (retain, nonatomic) id<AMSBagDataSourceProtocol> dataSource;

- (void).cxx_destruct;
- (id)initWithKey:(id)a0 value:(id)a1 valueType:(unsigned long long)a2;

@end
