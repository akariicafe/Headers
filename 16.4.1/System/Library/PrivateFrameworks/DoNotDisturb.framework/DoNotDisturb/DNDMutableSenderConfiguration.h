@class DNDBypassSettings, NSMutableSet;

@interface DNDMutableSenderConfiguration : DNDSenderConfiguration

@property (copy, nonatomic) NSMutableSet *allowedContactTypes;
@property (copy, nonatomic) NSMutableSet *deniedContactTypes;
@property (copy, nonatomic) NSMutableSet *allowedContactGroups;
@property (copy, nonatomic) NSMutableSet *deniedContactGroups;
@property (copy, nonatomic) NSMutableSet *allowedContacts;
@property (copy, nonatomic) NSMutableSet *deniedContacts;
@property (copy, nonatomic) DNDBypassSettings *phoneCallBypassSettings;

- (void)setDeniedContacts:(id)a0;
- (void)setDeniedContactTypes:(id)a0;
- (void)removeAllowedContactMatchingContact:(id)a0;
- (void)setAllowedContactTypes:(id)a0;
- (void)setAllowedContacts:(id)a0;
- (void)setPhoneCallBypassSettings:(id)a0;
- (void)setAllowedContactGroups:(id)a0;
- (void)setDeniedContactGroups:(id)a0;
- (void)removeDeniedContactMatchingContact:(id)a0;

@end
