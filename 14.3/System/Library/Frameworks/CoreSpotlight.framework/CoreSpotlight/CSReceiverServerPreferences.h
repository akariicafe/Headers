@class NSSet;

@interface CSReceiverServerPreferences : CoreSpotlightPreferences

@property (readonly, copy, nonatomic) NSSet *disabledServices;

- (id)init;
- (void)enableService:(id)a0;
- (void)disableService:(id)a0;

@end
