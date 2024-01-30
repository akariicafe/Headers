@class NSString;

@interface EKPersistentOrganizer : EKPersistentParticipant

@property (retain, nonatomic) NSString *displayNameRaw;
@property (retain, nonatomic) NSString *emailAddress;
@property (retain, nonatomic) NSString *URLString;
@property (nonatomic) BOOL isCurrentUser;

+ (id)relations;
+ (Class)meltedClass;
+ (id)defaultPropertiesToLoad;
+ (id)organizerWithName:(id)a0 emailAddress:(id)a1 address:(id)a2 isCurrentUser:(BOOL)a3;

- (int)entityType;
- (id)owner;
- (void)setOwner:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isCurrentUser;
- (void)setIsCurrentUser:(BOOL)a0;
- (id)initWithName:(id)a0 emailAddress:(id)a1 address:(id)a2 isCurrentUser:(BOOL)a3;
- (long long)scheduleAgent;
- (void)setScheduleAgent:(long long)a0;

@end
