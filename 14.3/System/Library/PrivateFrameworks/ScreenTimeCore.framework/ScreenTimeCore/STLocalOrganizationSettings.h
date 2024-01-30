@class NSString, STLocalOrganization;

@interface STLocalOrganizationSettings : STCoreOrganizationSettings

@property (retain, nonatomic) STLocalOrganization *organization;
@property (copy, nonatomic) NSString *recoveryAltDSID;

- (BOOL)updateWithDictionaryRepresentation:(id)a0;
- (void)setPasscode:(id)a0;
- (id)dictionaryRepresentation;

@end
