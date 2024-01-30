@class NSDictionary, NSSet, DNDSSenderConfigurationRecord;

@interface DNDSMutableConfigurationSecureRecord : DNDSConfigurationSecureRecord

@property (copy, nonatomic) DNDSSenderConfigurationRecord *senderConfiguration;
@property (copy, nonatomic) NSDictionary *allowedApplications;
@property (copy, nonatomic) NSSet *deniedApplications;
@property (copy, nonatomic) NSSet *allowedWebApplications;
@property (copy, nonatomic) NSSet *deniedWebApplications;

- (void)setAllowedApplications:(id)a0;
- (void)setAllowedWebApplications:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setDeniedApplications:(id)a0;
- (void)setSenderConfiguration:(id)a0;
- (void)setDeniedWebApplications:(id)a0;

@end
