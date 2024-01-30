@class PKServicePersonality;

@interface PKServiceDefaults : NSUserDefaults

@property (weak) PKServicePersonality *personality;

- (void)setObject:(id)a0 forKey:(id)a1;
- (BOOL)synchronize;
- (id)objectForKey:(id)a0;
- (id)initWithPersonality:(id)a0;
- (void).cxx_destruct;

@end
