@class UMUserPersona, UMUser, UMUserSwitchContext;

@interface UMMobileKeyBag : NSObject

@property (class, readonly, nonatomic) BOOL isSharedIPad;
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
+ (id)personaSpecForUser:(id)a0;
+ (void)_handleAttributeAccessCFError:(id)a0 outError:(id *)a1;
+ (BOOL)startSyncBubbleForUser:(id)a0 outError:(id *)a1;
+ (BOOL)fetchAttributesForUser:(id)a0 outError:(id *)a1;
+ (id)getFileHandleForData:(id)a0;
+ (id)dictionaryRepresentationOfTask:(id)a0;
+ (void)_setPasscodeTypeOnUser:(id)a0 withPasscodeData:(id)a1;
+ (id)syncBubbleMachServiceNamesForUser:(id)a0;
+ (id)taskFromDictionaryRepresentation:(id)a0;
+ (BOOL)retrieveReplacementVoucherFor:(unsigned int)a0 withAccoutID:(id)a1 generationSet:(BOOL)a2 replacementPort:(unsigned int *)a3 outError:(id *)a4;
+ (void)currentUserSwitchContextHasBeenUsed;
+ (double)passcodeBackOffIntervalForUser:(id)a0;
+ (void)_setAttributes:(id)a0 onUser:(id)a1;
+ (id)allSyncBubbleUsers;
+ (BOOL)_start:(BOOL)a0 syncBubbleForUser:(id)a1 outError:(id *)a2;
+ (int)_foregroundUID;
+ (id)loadUser:(id)a0 withPasscodeData:(id)a1;
+ (id)deleteUser:(id)a0;
+ (id)_uidDictForUser:(id)a0;
+ (id)allUsersWithFilter:(BOOL)a0;
+ (BOOL)isLoginSession;
+ (int)foregroundUIDWithError:(id *)a0;
+ (id)currentSyncBubbleUser;
+ (BOOL)writeAttributesToDiskForUser:(id)a0 outError:(id *)a1;
+ (BOOL)stopSyncBubbleForUser:(id)a0 outError:(id *)a1;
+ (id)queuedSyncBubbleUsers;
+ (void)updateLoginSessionType;
+ (BOOL)clearSyncBubblesWithOutError:(id *)a0;
+ (BOOL)adoptPersonaVoucherForAccoutID:(id)a0 outError:(id *)a1;
+ (id)userFromAttributes:(id)a0;
+ (id)_userAttributesForUID:(unsigned int)a0 outError:(id *)a1;
+ (BOOL)dataMigrationSetup:(id)a0 withPasscodeData:(id)a1 outError:(id *)a2;
+ (id)loadUserSession:(id)a0 withPasscodeData:(id)a1 outError:(id *)a2;
+ (id)_mutablePersonaSpecBase;

- (id)getFileHandleForData:(id)a0;

@end
