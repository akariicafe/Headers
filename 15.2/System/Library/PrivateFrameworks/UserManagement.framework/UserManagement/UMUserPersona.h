@class NSString;

@interface UMUserPersona : NSObject <NSCopying, NSMutableCopying> {
    NSString *personaName;
    BOOL shouldFetchAttributes;
}

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

+ (id)currentPersona;
+ (BOOL)currentPersonaMatchesPath:(id)a0;

- (id)createPersonaContextForBackgroundProcessingWithPersonaUniqueString:(id)a0;
- (id)restorePersonaWithSavedPersonaContext:(id)a0;
- (id)copyCurrentPersonaContextWithError:(id *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (BOOL)commitChanges;
- (BOOL)isEqualToPersona:(id)a0;
- (id)generateAndRestorePersonaContextWithPersonaUniqueString:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)commitChangesWithError:(id *)a0;
- (void)setPropertiesFromUserPersona:(id)a0;
- (void)fetchAttributesIfNeeded;
- (id)generateAndRestorePersonaContextWithIdentityString:(id)a0;
- (id)createPersonaContextForBackgroundProcessingWithIdentityString:(id)a0;

@end
