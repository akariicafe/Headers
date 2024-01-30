@class UIApplication, NSMutableDictionary;

@interface SNTestContext : NSObject

@property (readonly, nonatomic) NSMutableDictionary *objects;
@property (readonly, nonatomic) UIApplication *application;

- (id)initWithApplication:(id)a0;
- (id)objectForKey:(id)a0;
- (void).cxx_destruct;
- (void)setObject:(id)a0 forKey:(id)a1;

@end
