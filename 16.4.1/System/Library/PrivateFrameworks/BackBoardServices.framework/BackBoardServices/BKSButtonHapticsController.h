@interface BKSButtonHapticsController : NSObject

+ (id)sharedInstance;

- (void)applyDefinitions:(id)a0;
- (void)playHapticIdentifier:(long long)a0 speed:(unsigned long long)a1;

@end
