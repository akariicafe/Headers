@class NSString, NSPredicate, EKCalendar;

@interface EKSharee : EKObject <NSCopying, EKIdentityProtocol>

@property (copy, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *emailAddress;
@property (readonly, nonatomic) NSString *phoneNumber;
@property (nonatomic) unsigned long long shareeStatus;
@property (nonatomic) unsigned long long shareeAccessLevel;
@property (nonatomic) BOOL shareeMuteRemoval;
@property (readonly, nonatomic) NSPredicate *contactPredicate;
@property (readonly, nonatomic) NSString *UUID;
@property (copy, nonatomic) NSString *address;
@property (copy, nonatomic) NSString *firstName;
@property (copy, nonatomic) NSString *lastName;
@property (copy, nonatomic) NSString *externalID;
@property (readonly, nonatomic) EKCalendar *owner;
@property (readonly, nonatomic) BOOL isCurrentUserForSharing;
@property (readonly, nonatomic) BOOL isCurrentUserForScheduling;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)knownSingleValueKeysForComparison;
+ (Class)frozenClass;
+ (id)knownIdentityKeysForComparison;
+ (int)_calShareeAccessLevelFromEKShareeAccessLevel:(unsigned long long)a0;
+ (int)_calShareeStatusFromEKShareeStatus:(unsigned long long)a0;
+ (unsigned long long)_ekShareeAccessLevelFromCalShareeAccessLevel:(int)a0;
+ (unsigned long long)_ekShareeStatusFromCalShareeStatus:(int)a0;
+ (id)_urlForEmailAddress:(id)a0 andPhoneNumber:(id)a1;
+ (id)shareeWithName:(id)a0 emailAddress:(id)a1;
+ (id)shareeWithName:(id)a0 emailAddress:(id)a1 phoneNumber:(id)a2;
+ (id)shareeWithName:(id)a0 emailAddress:(id)a1 phoneNumber:(id)a2 externalID:(id)a3;
+ (id)shareeWithName:(id)a0 phoneNumber:(id)a1;
+ (id)shareeWithName:(id)a0 url:(id)a1;
+ (id)shareeWithUUID:(id)a0 name:(id)a1 emailAddress:(id)a2 phoneNumber:(id)a3;
+ (unsigned long long)statusEnumFromString:(id)a0;
+ (id)statusStringFromEnum:(unsigned long long)a0;

- (void)setEmailAddress:(id)a0;
- (id)displayName;
- (id)URL;
- (void)setPhoneNumber:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setUUID:(id)a0;
- (id)init;
- (void)setDisplayName:(id)a0;
- (id)existingContact;
- (id)contactPredicate;
- (int)shareeStatusRaw;
- (id)initWithName:(id)a0 url:(id)a1;
- (id)initWithName:(id)a0 url:(id)a1 externalID:(id)a2;
- (void)setShareeAccessLevelRaw:(int)a0;
- (void)setShareeStatusRaw:(int)a0;
- (int)shareeAccessLevelRaw;

@end
