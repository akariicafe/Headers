@class NSString;

@interface UMUserMutablePersona : UMUserPersona

@property (nonatomic) unsigned int uid;
@property (nonatomic) unsigned int gid;
@property (nonatomic) BOOL isEnterprisePersona;
@property (nonatomic) BOOL isPersonalPersona;
@property (nonatomic) BOOL isSystemPersona;
@property (nonatomic) BOOL isDefaultPersona;
@property (nonatomic) BOOL isGuestPersona;
@property (nonatomic) BOOL isDataSeparatedPersona;
@property (nonatomic) BOOL isDisabled;
@property (copy, nonatomic) NSString *userPersonaUniqueString;
@property (copy, nonatomic) NSString *userPersonaNickName;
@property (nonatomic) unsigned long long userPersonaType;

- (BOOL)commitChangesWithError:(id *)a0;
- (BOOL)commitChanges;

@end
