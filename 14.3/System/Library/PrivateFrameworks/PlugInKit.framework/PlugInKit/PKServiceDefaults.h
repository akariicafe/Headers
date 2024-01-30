@class PKServicePersonality;

@interface PKServiceDefaults : NSUserDefaults

@property (weak) PKServicePersonality *personality;

- (id)objectForKey:(id)a0;
- (void).cxx_destruct;
- (void)setObject:(id)a0 forKey:(id)a1;
- (BOOL)synchronize;
- (id)initWithPersonality:(id)a0;

@end
