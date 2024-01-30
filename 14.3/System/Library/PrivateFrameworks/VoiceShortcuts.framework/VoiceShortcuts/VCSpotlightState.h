@class NSDictionary;

@interface VCSpotlightState : NSObject

@property (readonly, nonatomic) unsigned long long identifier;
@property (readonly, nonatomic) NSDictionary *syncedShortcuts;

- (void)saveToPath:(id)a0;
- (id)initWithPath:(id)a0;
- (void).cxx_destruct;
- (BOOL)isConsistentWithClientState:(unsigned long long)a0;
- (id)initWithIdentifier:(unsigned long long)a0 syncedShortcuts:(id)a1;

@end
