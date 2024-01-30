@class HKKeyValueDomain;

@interface WDUserDefaults : NSObject

@property (retain, nonatomic) HKKeyValueDomain *keyValueDomain;

- (id)initWithHealthStore:(id)a0;
- (void).cxx_destruct;
- (void)setValue:(id)a0 forKey:(id)a1 completion:(id /* block */)a2;
- (void)valueForKey:(id)a0 callback:(id /* block */)a1;

@end
