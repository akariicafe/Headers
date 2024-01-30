@class UMUserPersona, UMUser, UMUserSwitchContext;

@interface UMMobileKeyBag : NSObject

@property (class, readonly, nonatomic) BOOL isMultiUser;
@property (class, readonly, nonatomic) BOOL inSyncBubble;
@property (class, readonly, nonatomic) BOOL isInternalBuild;
@property (class, readonly, nonatomic) unsigned int lastLoggedInUID;
@property (class, readonly, nonatomic) unsigned long long userType;
@property (class, readonly, nonatomic) unsigned long long maxNumberOfUsers;
@property (class, readonly, nonatomic) unsigned long long userQuotaSize;
@property (class, readonly, nonatomic) UMUser *currentUser;
@property (class, readonly, nonatomic) UMUser *loginUser;
@property (class, readonly, nonatomic) UMUser *lastLoggedInUser;
@property (class, readonly, nonatomic) UMUserPersona *currentPersona;
@property (class, readonly, nonatomic) UMUserSwitchContext *currentUserSwitchContext;

+ (void)initialize;
+ (id)taskFromDictionaryRepresentation:(id)a0;
+ (void)currentUserSwitchContextHasBeenUsed;
+ (id)_uidDictForUser:(id)a0;
+ (BOOL)stopSyncBubbleForUser:(id)a0 outError:(id *)a1;
+ (id)loadUser:(id)a0 withPasscodeData:(id)a1;
+ (id)personaSpecForUser:(id)a0;
+ (BOOL)writeAttributesToDiskForUser:(id)a0 outError:(id *)a1;
+ (id)dictionaryRepresentationOfTask:(id)a0;
+ (BOOL)clearSyncBubblesWithOutError:(id *)a0;
+ (id)userFromAttributes:(id)a0;
+ (BOOL)isLoginSession;
+ (id)allSyncBubbleUsers;
+ (BOOL)startSyncBubbleForUser:(id)a0 outError:(id *)a1;
+ (void)_handleAttributeAccessCFError:(struct __CFError { } *)a0 outError:(id *)a1;
+ (void)_setAttributes:(id)a0 onUser:(id)a1;
+ (id)currentSyncBubbleUser;
+ (void)updateLoginSessionType;
+ (id)deleteUser:(id)a0;
+ (int)_foregroundUID;
+ (id)_userAttributesForUID:(unsigned int)a0 outError:(id *)a1;
+ (void)_setPasscodeTypeOnUser:(id)a0 withPasscodeData:(id)a1;
+ (double)passcodeBackOffIntervalForUser:(id)a0;
+ (id)queuedSyncBubbleUsers;
+ (BOOL)fetchAttributesForUser:(id)a0 outError:(id *)a1;
+ (id)syncBubbleMachServiceNamesForUser:(id)a0;
+ (id)_mutablePersonaSpecBase;
+ (BOOL)adoptPersonaVoucherForAccoutID:(id)a0 outError:(id *)a1;
+ (id)allUsersWithFilter:(BOOL)a0;
+ (BOOL)_start:(BOOL)a0 syncBubbleForUser:(id)a1 outError:(id *)a2;

@end
