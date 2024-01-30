@class NSSet, DNDSBypassSettingsRecord;

@interface DNDSMutableSenderConfigurationRecord : DNDSSenderConfigurationRecord

@property (copy, nonatomic) NSSet *allowedContactTypes;
@property (copy, nonatomic) NSSet *deniedContactTypes;
@property (copy, nonatomic) NSSet *allowedContactGroups;
@property (copy, nonatomic) NSSet *deniedContactGroups;
@property (copy, nonatomic) NSSet *allowedContacts;
@property (copy, nonatomic) NSSet *deniedContacts;
@property (copy, nonatomic) DNDSBypassSettingsRecord *phoneCallBypassSettings;

- (void)setDeniedContactGroups:(id)a0;
- (void)setDeniedContactTypes:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setAllowedContactGroups:(id)a0;
- (void)setDeniedContacts:(id)a0;
- (void)setAllowedContactTypes:(id)a0;
- (void)setPhoneCallBypassSettings:(id)a0;
- (void)setAllowedContacts:(id)a0;

@end
