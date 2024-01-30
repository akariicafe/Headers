@class HKKeyValueDomain;

@interface WDUserDefaults : NSObject

@property (retain, nonatomic) HKKeyValueDomain *keyValueDomain;

- (void).cxx_destruct;
- (void)setValue:(id)a0 forKey:(id)a1 completion:(id /* block */)a2;
- (id)initWithHealthStore:(id)a0;
- (void)valueForKey:(id)a0 callback:(id /* block */)a1;

@end
