@class NSError;

@interface AMSFailingBagValue : AMSFrozenBagValue

@property (retain, nonatomic) NSError *error;

- (void).cxx_destruct;
- (id)initWithKey:(id)a0 valueType:(unsigned long long)a1 error:(id)a2;
- (void)valueWithCompletion:(id /* block */)a0;

@end
