@class NSDictionary;

@interface VCSpotlightState : NSObject

@property (readonly, nonatomic) unsigned long long identifier;
@property (readonly, nonatomic) NSDictionary *syncedShortcuts;

- (id)initWithPath:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(unsigned long long)a0 syncedShortcuts:(id)a1;
- (BOOL)isConsistentWithClientState:(unsigned long long)a0;
- (BOOL)saveToPath:(id)a0 error:(id *)a1;

@end
