@class NSDictionary, NSSet, DNDSSenderConfigurationRecord;

@interface DNDSMutableConfigurationSecureRecord : DNDSConfigurationSecureRecord

@property (copy, nonatomic) DNDSSenderConfigurationRecord *senderConfiguration;
@property (copy, nonatomic) NSDictionary *allowedApplications;
@property (copy, nonatomic) NSSet *deniedApplications;

- (void)setDeniedApplications:(id)a0;
- (void)setAllowedApplications:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setSenderConfiguration:(id)a0;

@end
