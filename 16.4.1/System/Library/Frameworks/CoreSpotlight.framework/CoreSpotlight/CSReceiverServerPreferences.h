@class NSSet;

@interface CSReceiverServerPreferences : CoreSpotlightPreferences

@property (readonly, copy, nonatomic) NSSet *disabledServices;

- (void)enableService:(id)a0;
- (id)init;
- (void)disableService:(id)a0;

@end
