@class PKServicePersonality;

@interface PKServiceDefaults : NSUserDefaults

@property (weak) PKServicePersonality *personality;

- (void)setObject:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)objectForKey:(id)a0;
- (BOOL)synchronize;
- (id)initWithPersonality:(id)a0;

@end
