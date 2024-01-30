@class UIApplication, NSMutableDictionary, NSString;

@interface SNTestContext : NSObject

@property (readonly, nonatomic) NSMutableDictionary *objects;
@property (readonly, nonatomic) UIApplication *application;
@property (readonly, nonatomic) NSString *testName;

- (void)setObject:(id)a0 forKey:(id)a1;
- (id)objectForKey:(id)a0;
- (id)initWithApplication:(id)a0 testName:(id)a1;
- (void).cxx_destruct;

@end
