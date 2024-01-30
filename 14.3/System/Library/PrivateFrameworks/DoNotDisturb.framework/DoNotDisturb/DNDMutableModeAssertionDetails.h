@class NSString, DNDModeAssertionLifetime, NSDate;

@interface DNDMutableModeAssertionDetails : DNDModeAssertionDetails

@property (copy, nonatomic) NSDate *userVisibleEndDate;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *modeIdentifier;
@property (copy, nonatomic) DNDModeAssertionLifetime *lifetime;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setLifetime:(id)a0;
- (void)setUserVisibleEndDate:(id)a0;
- (void)setIdentifier:(id)a0;
- (void)setModeIdentifier:(id)a0;

@end
