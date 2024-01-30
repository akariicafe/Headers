@class NSString, DNDModeAssertionLifetime, NSDate;

@interface DNDMutableModeAssertionDetails : DNDModeAssertionDetails

@property (copy, nonatomic) NSDate *userVisibleEndDate;
@property (copy, nonatomic) NSDate *modeConfigurationModifiedDate;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *modeIdentifier;
@property (copy, nonatomic) DNDModeAssertionLifetime *lifetime;
@property (nonatomic) unsigned long long reason;

- (void)setLifetime:(id)a0;
- (void)setReason:(unsigned long long)a0;
- (void)setModeIdentifier:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setIdentifier:(id)a0;
- (void)setModeConfigurationModifiedDate:(id)a0;
- (void)setUserVisibleEndDate:(id)a0;

@end
