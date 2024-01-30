@class NSArray, UMUser, UMUserPersona, UMUserSwitchContext;

@interface UMMobileKeyBag : NSObject

@property (class, readonly, nonatomic) BOOL isMultiUser;
@property (class, readonly, nonatomic) BOOL inSyncBubble;
@property (class, readonly, nonatomic) unsigned int lastLoggedInUID;
@property (class, readonly, nonatomic) unsigned long long userType;
@property (class, readonly, nonatomic) unsigned long long maxNumberOfUsers;
@property (class, readonly, nonatomic) unsigned long long userQuotaSize;
@property (class, readonly, nonatomic) UMUser *currentUser;
@property (class, readonly, nonatomic) UMUser *loginUser;
@property (class, readonly, nonatomic) UMUser *lastLoggedInUser;
@property (class, readonly, nonatomic) NSArray *allUsers;
@property (class, readonly, nonatomic) UMUserPersona *currentPersona;
@property (class, readonly, nonatomic) UMUserSwitchContext *currentUserSwitchContext;

+ (void)initialize;
+ (BOOL)isLoginSession;
+ (void)updateLoginSessionType;
+ (id)_userAttributesForUID:(unsigned int)a0 outError:(id *)a1;
+ (id)taskFromDictionaryRepresentation:(id)a0;
+ (void)currentUserSwitchContextHasBeenUsed;
+ (int)_foregroundUID;
+ (id)syncBubbleMachServiceNamesForUser:(id)a0;
+ (BOOL)clearSyncBubblesWithOutError:(id *)a0;
+ (BOOL)stopSyncBubbleForUser:(id)a0 outError:(id *)a1;
+ (id)dictionaryRepresentationOfTask:(id)a0;
+ (id)allSyncBubbleUsers;
+ (id)userFromAttributes:(id)a0;
+ (void)_handleAttributeAccessCFError:(struct __CFError { } *)a0 outError:(id *)a1;
+ (void)_setPasscodeTypeOnUser:(id)a0 withPasscodeData:(id)a1;
+ (void)_setAttributes:(id)a0 onUser:(id)a1;
+ (id)personaSpecForUser:(id)a0;
+ (id)deleteUser:(id)a0;
+ (id)queuedSyncBubbleUsers;
+ (id)currentSyncBubbleUser;
+ (BOOL)writeAttributesToDiskForUser:(id)a0 outError:(id *)a1;
+ (BOOL)_start:(BOOL)a0 syncBubbleForUser:(id)a1 outError:(id *)a2;
+ (id)loadUser:(id)a0 withPasscodeData:(id)a1;
+ (id)_uidDictForUser:(id)a0;
+ (BOOL)fetchAttributesForUser:(id)a0 outError:(id *)a1;
+ (id)_mutablePersonaSpecBase;
+ (BOOL)adoptPersonaVoucherForAccoutID:(id)a0 outError:(id *)a1;
+ (double)passcodeBackOffIntervalForUser:(id)a0;
+ (BOOL)startSyncBubbleForUser:(id)a0 outError:(id *)a1;

@end
