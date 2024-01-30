@class NSString, HMUserHomeAccessSettings;

@interface HMMutableUserInviteInformation : HMUserInviteInformation

@property (copy) HMUserHomeAccessSettings *homeAccessSettings;
@property (copy) NSString *userID;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
