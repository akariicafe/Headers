@class NSString, NSMutableDictionary;

@interface SSMutableBagProfileConfig : SSBagProfileConfig

@property (retain, nonatomic) NSMutableDictionary *mutableBagKeysDictionary;
@property (nonatomic) double bagLoadTimeout;
@property (copy, nonatomic) NSString *profile;
@property (copy, nonatomic) NSString *profileVersion;

- (id)init;
- (void).cxx_destruct;
- (id)bagKeysDictionary;
- (void)registerBagKey:(id)a0 valueType:(unsigned long long)a1;
- (void)registerBagKey:(id)a0 valueType:(unsigned long long)a1 defaultValue:(id)a2;

@end
