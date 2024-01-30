@interface STCommunicationLimits : NSObject <NSCopying>

@property long long screenTimeCommunicationLimit;
@property long long downtimeCommunicationLimit;
@property long long contactManagementState;
@property BOOL contactsEditable;

+ (BOOL)hasShownCompatibilityAlertForDSID:(id)a0;
+ (void)setHasShownCompatibilityAlert:(BOOL)a0 forDSID:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
