@class NSSet;

@interface CSReceiverServerPreferences : CoreSpotlightPreferences

@property (readonly, copy, nonatomic) NSSet *disabledServices;

- (void)disableService:(id)a0;
- (void)enableService:(id)a0;
- (id)init;

@end
