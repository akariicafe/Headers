@class NSDictionary, NSUserDefaults;

@interface ANDefaults : NSObject <ANDefaultsProtocol>

@property (retain, nonatomic) NSUserDefaults *defaults;
@property (readonly, nonatomic) NSDictionary *defaultsItems;

+ (id)sharedInstance;

- (id)objectForDefault:(id)a0;
- (id)numberForDefault:(id)a0;
- (void)setObject:(id)a0 forDefault:(id)a1;
- (BOOL)boolForDefault:(id)a0;
- (void)setBool:(BOOL)a0 forDefault:(id)a1;
- (id)init;
- (void)setNumber:(id)a0 forDefault:(id)a1;
- (void).cxx_destruct;

@end
