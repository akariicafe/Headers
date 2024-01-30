@class NSDictionary, NSUserDefaults;

@interface ANDefaults : NSObject

@property (retain, nonatomic) NSUserDefaults *defaults;
@property (readonly, nonatomic) NSDictionary *defaultsItems;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (BOOL)boolForDefault:(id)a0;
- (id)objectForDefault:(id)a0;
- (id)numberForDefault:(id)a0;
- (void)setObject:(id)a0 forDefault:(id)a1;
- (void)setNumber:(id)a0 forDefault:(id)a1;
- (void)setBool:(BOOL)a0 forDefault:(id)a1;

@end
