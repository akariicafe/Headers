@class PKHostPlugIn;

@interface PKHostDefaults : NSUserDefaults

@property (weak) PKHostPlugIn *plugin;

- (void)setObject:(id)a0 forKey:(id)a1;
- (void)registerDefaults:(id)a0;
- (void).cxx_destruct;
- (id)objectForKey:(id)a0;
- (BOOL)synchronize;
- (id)initWithPlugIn:(id)a0;

@end
