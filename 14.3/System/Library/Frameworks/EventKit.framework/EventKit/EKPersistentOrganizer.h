@class NSString;

@interface EKPersistentOrganizer : EKPersistentParticipant

@property (retain, nonatomic) NSString *displayNameRaw;
@property (retain, nonatomic) NSString *emailAddress;
@property (retain, nonatomic) NSString *URL;
@property (nonatomic) BOOL isCurrentUser;

+ (id)defaultPropertiesToLoad;
+ (id)relations;
+ (id)organizerWithName:(id)a0 emailAddress:(id)a1 address:(id)a2 isCurrentUser:(BOOL)a3;
+ (Class)meltedClass;

- (BOOL)isCurrentUser;
- (int)entityType;
- (void)setIsCurrentUser:(BOOL)a0;
- (id)owner;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setOwner:(id)a0;
- (id)initWithName:(id)a0 emailAddress:(id)a1 address:(id)a2 isCurrentUser:(BOOL)a3;
- (id)description;
- (long long)scheduleAgent;
- (void)setScheduleAgent:(long long)a0;

@end
