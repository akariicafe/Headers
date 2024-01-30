@class NSError;

@interface AMSFailingBagValue : AMSFrozenBagValue

@property (retain, nonatomic) NSError *error;

- (id)initWithKey:(id)a0 valueType:(unsigned long long)a1 error:(id)a2;
- (void)valueWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;

@end
